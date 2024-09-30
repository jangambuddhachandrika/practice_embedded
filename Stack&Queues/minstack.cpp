/*
* minstack.cpp
*
*  Created on: Sep 11, 2024
*      Author: JANGCHA
*/
#include<bits/stdc++.h>

using namespace std;

class StackMin
{
private:
	stack<int> MainStack;
	stack<int>minstack;

public:
	void push(int val)
	{
		MainStack.push(val);
		if(minstack.empty()||val<=minstack.top())
				{
					minstack.push(val);
				}
	}
	void pop()
	{
		if(MainStack.empty())
		{
			throw std::underflow_error("stack is empty");
		}
		if(MainStack.top()==minstack.top())
		{
			minstack.pop();
		}
		MainStack.pop();
	}
	int top()const{
		if(MainStack.empty())
		{
			 throw std::underflow_error("Stack is empty");
		}
		return MainStack.top();
	}

	int getMin()const{
		if (minstack.empty()) {
		            throw std::underflow_error("Stack is empty");
		        }
		        return minstack.top();
	}
	bool isEmpty() const{
		return MainStack.empty();
	}
};

int main() {
   StackMin stack;
   stack.push(5);
   stack.push(3);
   stack.push(7);
   stack.push(3);

   std::cout << "Minimum: " << stack.getMin() << std::endl;  // Outputs 3
   stack.pop();
   std::cout << "Minimum after pop: " << stack.getMin() << std::endl;  // Outputs 3
   stack.pop();
   std::cout << "Minimum after pop: " << stack.getMin() << std::endl;  // Outputs 3
   stack.pop();
   std::cout << "Minimum after pop: " << stack.getMin() << std::endl;  // Outputs 5

   return 0;
}
