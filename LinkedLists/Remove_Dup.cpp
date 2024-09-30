/*
 * Remove_Dup.cpp
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

void RemoveDuplicates(Node* head)
{
	if(!head)
	{
		return ;
	}
	unordered_set<int>freq;
	Node*current = head;
	Node*prev = nullptr;

	while(current!=nullptr)
	{
		if(freq.find(current->data)!=freq.end())
		{
			prev->next = current->next;
			delete(current);
		}
		else
		{
			freq.insert(current->data);
			prev = current;
		}
		current = prev->next;
	}

}

//Utility function to insert a new node at the end of the list
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
   append(head, 10);
   append(head, 12);
   append(head, 11);
   append(head, 11);
   append(head, 12);
   append(head, 10);
   append(head, 15);

   std::cout << "Original List: ";
   printList(head);

   RemoveDuplicates(head);

   std::cout << "List after removing duplicates: ";
   printList(head);

   return 0;
}
