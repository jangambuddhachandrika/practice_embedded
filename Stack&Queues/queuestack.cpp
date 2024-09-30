#include <iostream>
#include <stack>
#include <stdexcept>

class MyQueue {
private:
   std::stack<int> stack1;  // Stack to handle enqueues
   std::stack<int> stack2;  // Stack to handle dequeues

   // Helper function to shift elements from stack1 to stack2 if needed
   void shiftStacks() {
       if (stack2.empty()) {
           while (!stack1.empty()) {
               stack2.push(stack1.top());
               stack1.pop();
           }
       }
   }

public:
   // Push element x to the back of queue
   void enqueue(int x) {
       stack1.push(x);
   }

   // Removes the element from in front of queue and returns that element
   int dequeue() {
       shiftStacks();  // Ensure stack2 has the current front element
       if (stack2.empty()) {
           throw std::underflow_error("Queue is empty");
       }
       int front = stack2.top();
       stack2.pop();
       return front;
   }

   // Get the front element
   int peek() {
       shiftStacks();  // Ensure stack2 has the current front element
       if (stack2.empty()) {
           throw std::underflow_error("Queue is empty");
       }
       return stack2.top();
   }

   // Return whether the queue is empty
   bool isEmpty() const {
       return stack1.empty() && stack2.empty();
   }
};

int main() {
   MyQueue q;
   q.enqueue(1);
   q.enqueue(2);
   q.enqueue(3);

   std::cout << "Front element: " << q.peek() << std::endl;  // Outputs 1
   std::cout << "Dequeue: " << q.dequeue() << std::endl;     // Outputs 1
   std::cout << "Dequeue: " << q.dequeue() << std::endl;     // Outputs 2
   std::cout << "Queue is empty: " << (q.isEmpty() ? "Yes" : "No") << std::endl;  // Outputs No

   return 0;
}
