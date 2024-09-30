/*
 * delete_middle.cpp
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

// Function to delete the given node (only access to the node to be deleted)
bool deleteMiddleNode(Node* node) {
    if (node == nullptr || node->next == nullptr) {
        return false; // Failure if the node is the last node or nullptr
    }

    // Copy the data from the next node into the current node
    Node* nextNode = node->next;
    node->data = nextNode->data;
    node->next = nextNode->next;

    // Free the memory of the next node (optional)
    delete nextNode;

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
   append(head, 1);
   append(head, 2);
   append(head, 3);
   append(head, 4);
   append(head, 5);

   std::cout << "Original List: ";
   printList(head);

   // Let's delete the node with value 3 (we have access only to this node)
   Node* nodeToDelete = head->next->next; // Node with value 3
   if (deleteMiddleNode(nodeToDelete)) {
       std::cout << "List after deleting node 3: ";
       printList(head);
   } else {
       std::cout << "Cannot delete the node." << std::endl;
   }

   return 0;
}

