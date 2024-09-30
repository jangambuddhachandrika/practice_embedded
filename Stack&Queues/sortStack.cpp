/*
* sortStack.cpp
*
*  Created on: Sep 12, 2024
*      Author: JANGCHA
*/

#include <iostream>
#include <stack>

using namespace std;
void sortStack(stack<int> &s)
{
	stack<int> temp;
	while(!s.empty())
	{
		int val = s.top();
		s.pop();
		while(!temp.empty()&& temp.top()>val)
		{
			s.push(temp.top());
			temp.pop();

		}
		temp.push(val);
	}
	while(!temp.empty())
	{
		s.push(temp.top());
		temp.pop();
	}
}
// Helper function to print the stack (from top to bottom)
void printStack(std::stack<int> s) {
   while (!s.empty()) {
       std::cout << s.top() << " ";
       s.pop();
   }
   std::cout << std::endl;
}

int main() {
   stack<int> s;
   s.push(34);
   s.push(3);
   s.push(31);
   s.push(98);
   s.push(92);
   s.push(23);

   std::cout << "Original Stack: ";
   printStack(s);

   sortStack(s);

   std::cout << "Sorted Stack: ";
   printStack(s);

   return 0;
}
