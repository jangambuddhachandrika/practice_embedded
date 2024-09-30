/*
* Intersection.cpp
*
*  Created on: Sep 11, 2024
*      Author: JANGCHA
*/


#include<bits/stdc++.h>

using namespace std;


struct Node
{
	int data;
	Node* next;
	Node(int val):data(val),next(nullptr){}
};
// Utility function to insert a new node at the end of the list
void append(Node*& head, int data) {
   if (!head) {
       head = new Node(data);
       return;
   }
   Node* temp = head;
   while (temp->next != nullptr) {
       temp = temp->next;
   }
   temp->next = new Node(data);
}

int getLength(Node* head)
{
	Node* curr = head;
	int cnt = 0;
	while(curr!=nullptr)
	{
		cnt++;
		curr = curr->next;
	}
	return cnt;
}

Node* getIntersectionNode(Node*head1,Node*head2)
{
	int len1 = getLength(head1);
	int len2 = getLength(head2);
	if(len1>len2)
	{
		int diff = len1-len2;
		for(int i=0;i<diff;i++)
		{
			head1 = head1->next;
		}
	}
	else
	{
		int diff = len2-len1;
		for(int i=0;i<diff;i++)
		{
			head2 = head2->next;
		}
	}
	while(head1!=nullptr || head2!=nullptr)
	{
		if(head1==head2)
		{
			return head1;
		}
		head1 = head1->next;
		head2 = head2->next;
	}
	return nullptr;
}


// Utility function to print a linked list from a given node
void printList(Node* head) {
   while (head != nullptr) {
       std::cout << head->data << " ";
       head = head->next;
   }
   std::cout << std::endl;
}

int main() {
   // Create first linked list: 1 -> 2 -> 3 -> 4 -> 5
   Node* headA = nullptr;
   append(headA, 1);
   append(headA, 2);
   append(headA, 3);
   append(headA, 4);
   append(headA, 5);

   // Create second linked list: 9 -> 8 -> 4 -> 5 (intersects at node with value 4)
   Node* headB = new Node(9);
   headB->next = new Node(8);
   headB->next->next = headA->next->next->next;  // Intersection at node with value 4

   std::cout << "List A: ";
   printList(headA);

   std::cout << "List B: ";
   printList(headB);

   // Get the intersection node
   Node* intersection = getIntersectionNode(headA, headB);

   if (intersection != nullptr) {
       std::cout << "Intersection at node with value: " << intersection->data << std::endl;
   } else {
       std::cout << "No intersection." << std::endl;
   }

   return 0;
}

