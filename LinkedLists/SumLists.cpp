/*
 * SumLists.cpp
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

Node* addTwoNumbers(Node*head1,Node*head2)
{
	Node* current1 = head1;
	Node* current2 = head2;
	int carry = 0;
	Node*anhead = nullptr;
	int ans =0;
	while(current1&&current2)
	{
		int sum = current1->data+current2->data+carry;
		if(current1->next==nullptr||current2->next == nullptr)
		{
			 ans = sum;
		}
		else
		{
		 ans = sum%10;
		}
		carry = sum/10;
		append(anhead,ans);
		current1 = current1->next;
		current2 = current2->next;
	}
	return anhead;

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
   // First number: 617 represented as 7 -> 1 -> 6
   Node* l1 = nullptr;
   append(l1, 6);
   append(l1, 1);
   append(l1, 7);

   // Second number: 295 represented as 5 -> 9 -> 2
   Node* l2 = nullptr;
   append(l2, 6);
   append(l2, 9);
   append(l2, 6);

   std::cout << "List 1: ";
   printList(l1);
   std::cout << "List 2: ";
   printList(l2);

   // Add the two numbers
   Node* result = addTwoNumbers(l1, l2);

   std::cout << "Sum: ";
   printList(result);

   return 0;
}
