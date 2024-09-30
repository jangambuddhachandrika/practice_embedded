/*
 * Palindrome.cpp
 *
 *  Created on: Sep 10, 2024
 *      Author: JANGCHA
 */

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(int val):data(val),next(nullptr){}
};

Node* reverseList(Node*head)
{
	Node*prev = nullptr;
	Node*curr = head;
	while(curr!=nullptr)
	{
		Node*temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	return prev;
}

bool isPalindrome(Node*head)
{
	if(head==nullptr||head->next == nullptr)
	{
		return true;
	}

	Node* slow = head;
	Node* fast = head;
	while(fast != nullptr && fast->next != nullptr)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	Node*secondhalf = reverseList(slow);
	Node*curr = head;
	while(secondhalf!=nullptr)
	{
		if(curr->data!=secondhalf->data)
		{
			return false;
		}
		secondhalf = secondhalf->next;
		curr = curr->next;
	}
	return true;

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

   // Create a linked list: 1 -> 2 -> 3 -> 2 -> 1
   append(head, 1);
   append(head, 2);
   append(head, 3);
   append(head, 2);
   append(head, 1);

   std::cout << "Original List: ";
   printList(head);

   // Check if the list is a palindrome
   if (isPalindrome(head)) {
       std::cout << "The linked list is a palindrome." << std::endl;
   } else {
       std::cout << "The linked list is not a palindrome." << std::endl;
   }

   std::cout << "Restored List: ";
   printList(head);

   return 0;
}
