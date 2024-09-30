#include <iostream>

// Define the structure for a linked list node
struct Node {
   char data;
   Node* next;
   Node(char val) : data(val), next(nullptr) {}
};

// Utility function to insert a new node at the end of the list
void append(Node*& head, char data) {
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

// Function to detect the loop and return the starting node of the loop
Node* detectLoop(Node* head) {
   if (!head || !head->next) {
       return nullptr;  // No loop in an empty or single-node list
   }

   Node* slow = head;
   Node* fast = head;

   // Step 1: Detect if a loop exists using slow and fast pointers
   while (fast != nullptr && fast->next != nullptr) {
       slow = slow->next;
       fast = fast->next->next;

       if (slow == fast) {
           break;  // Loop detected
       }
   }

   // If fast pointer reaches the end, there is no loop
   if (fast == nullptr || fast->next == nullptr) {
       return nullptr;
   }

   // Step 2: Move one pointer back to the head and advance both pointers
   slow = head;
   while (slow != fast) {
       slow = slow->next;
       fast = fast->next;
   }

   // Both pointers now meet at the start of the loop
   return slow;
}

// Utility function to print a linked list from a given node (for non-circular list)
void printList(Node* head) {
   while (head != nullptr) {
       std::cout << head->data << " ";
       head = head->next;
   }
   std::cout << std::endl;
}

int main() {
   // Create a linked list: A -> B -> C -> D -> E -> C (loop back to C)
   Node* head = nullptr;
   append(head, 'A');
   append(head, 'B');
   append(head, 'C');
   append(head, 'D');
   append(head, 'E');

   // Create a loop: E -> C
   head->next->next->next->next->next = head->next->next;  // Node 'E' points to 'C'

   // Detect the loop
   Node* loopStart = detectLoop(head);

   if (loopStart != nullptr) {
       std::cout << "Loop starts at node: " << loopStart->data << std::endl;
   } else {
       std::cout << "No loop detected." << std::endl;
   }

   return 0;
}
