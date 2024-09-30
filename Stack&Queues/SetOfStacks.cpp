#include <iostream>
#include <vector>
#include <stack>
#include <stdexcept>

class SetOfStacks {
private:
   std::vector<std::stack<int>> stacks;  // Vector to hold multiple stacks
   int capacity;                         // Capacity of each stack

public:
   SetOfStacks(int capacity) {
       if (capacity <= 0) {
           throw std::invalid_argument("Capacity must be greater than 0");
       }
       this->capacity = capacity;
   }

   // Push an element onto the set of stacks
   void push(int value) {
       // If there are no stacks or the last stack is full, create a new stack
       if (stacks.empty() || stacks.back().size() == capacity) {
           std::stack<int> newStack;
           stacks.push_back(newStack);
       }
       stacks.back().push(value);
   }

   // Pop an element from the set of stacks
   int pop() {
       if (stacks.empty()) {
           throw std::underflow_error("No elements to pop");
       }

       int value = stacks.back().top();
       stacks.back().pop();

       // If the last stack becomes empty, remove it
       if (stacks.back().empty()) {
           stacks.pop_back();
       }

       return value;
   }

   // Optional: Pop from a specific stack (index)
   int popAt(int index) {
       if (index < 0 || index >= stacks.size()) {
           throw std::out_of_range("Invalid stack index");
       }

       int value = stacks[index].top();
       stacks[index].pop();

       // If a stack becomes empty after pop, remove it
       if (stacks[index].empty()) {
           stacks.erase(stacks.begin() + index);
       }

       return value;
   }

   // Check if the set of stacks is empty
   bool isEmpty() const {
       return stacks.empty();
   }
};

int main() {
   SetOfStacks setOfStacks(3);  // Each stack can hold up to 3 elements

   // Push elements
   setOfStacks.push(1);
   setOfStacks.push(2);
   setOfStacks.push(3);
   setOfStacks.push(4);
   setOfStacks.push(5);

   // Pop elements
   std::cout << "Popped: " << setOfStacks.pop() << std::endl;  // Outputs 5
   std::cout << "Popped: " << setOfStacks.pop() << std::endl;  // Outputs 4

   // Use popAt to pop from a specific stack
   setOfStacks.push(6);
   setOfStacks.push(7);
   std::cout << "Popped from stack 0: " << setOfStacks.popAt(0) << std::endl;  // Outputs 3

   return 0;
}
