/*
* ThreeInOne.cpp
*
*  Created on: Sep 11, 2024
*      Author: JANGCHA
*/

#include<bits/stdc++.h>
using namespace std;

class ThreeInOne{
private:
	int * arr;
	int stackSize ;
	int top[3];

public:
	ThreeInOne(int stackSize )
	{
		this->stackSize  = stackSize ;
		arr = new int[3*stackSize ];
		top[0]=-1;
		top[1]=-1;
		top[2]=-1;
	}
	~ThreeInOne(){
		delete[] arr;
	}

	void push(int stackNum,int value)
	{
		if(top[stackNum]>=stackSize-1)
		{
			throw std::overflow_error("stack over flow");
		}
		top[stackNum]++;
		arr[stackNum*stackSize+top[stackNum]] = value;
	}
	int pop(int stackNum)
	{
		if (top[stackNum] == -1) {
		            throw std::underflow_error("Stack Underflow");
		        }
		        int poppedValue = arr[stackNum * stackSize + top[stackNum]];
		        top[stackNum]--;
		        return poppedValue;

	}
	// Peek the top element of a specified stack
	    int peek(int stackNum) {
	        if (top[stackNum] == -1) {
	            throw std::underflow_error("Stack is Empty");
	        }
	        return arr[stackNum * stackSize + top[stackNum]];
	    }

	    // Check if a specified stack is empty
	    bool isEmpty(int stackNum) {
	        return top[stackNum] == -1;
	    }
};
int main() {
   ThreeInOne stacks(5);  // Each stack can hold 5 elements

   // Push elements onto different stacks
   stacks.push(0, 10);
   stacks.push(0, 20);
   stacks.push(1, 30);
   stacks.push(2, 40);

   // Pop elements from stack 0
   std::cout << "Pop from stack 0: " << stacks.pop(0) << std::endl;
   std::cout << "Peek stack 1: " << stacks.peek(1) << std::endl;
   std::cout << "Is stack 2 empty? " << (stacks.isEmpty(2) ? "Yes" : "No") << std::endl;

   return 0;
}
