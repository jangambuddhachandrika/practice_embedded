/*
 * Kthtolast.cpp
 *
 *  Created on: Sep 10, 2024
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



int PrintKthtoLast(Node*head,int k)
{
	int cnt = 0;
	Node*current = head;
	while(current)
	{
		cnt++;
		current = current->next;
	}
	int ans = cnt-k;
	while(ans)
	{
		head = head->next;
		ans--;
	}
	return head->data;

}
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

// Utility function to print the linked list
void printList(Node* head) {
   while (head != nullptr) {
       std::cout << head->data << " ";
       head = head->next;
   }
   std::cout << std::endl;
}

int main() {
   Node* head = nullptr;
   append(head, 1);
   append(head, 2);
   append(head, 3);
   append(head, 4);
   append(head, 5);

   std::cout << "Original List: ";
   printList(head);

   int k = 2;
   int kthToLast = PrintKthtoLast(head, k);

   if (kthToLast) {
       std::cout << "The " << k << "th to last element is: " << kthToLast << std::endl;
   } else {
       std::cout << "The list is shorter than " << k << " elements." << std::endl;
   }

   return 0;
}




