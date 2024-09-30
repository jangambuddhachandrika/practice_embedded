/*
 * Palindrome_permutation.cpp
 *
 *  Created on: Sep 9, 2024
 *      Author: JANGCHA
 */

#include<bits/stdc++.h>
using namespace std;

bool CheckPalindrome(string str)
{
	unordered_map<char,int>freq;
	int count = 0;
	for(char i : str)
	{
		 if (std::isalpha(i))
		 {  // Consider only alphabetic characters
		            i = std::tolower(i);  // Convert to lowercase
		            freq[i]++;
		        }
	}
	for(auto entry : freq)
	{
		if(entry.second%2 !=0)
		{
			count++;
		}
	}
	return count<=1;
}

int main() {
   std::string input = "Tact Coa";

   if (CheckPalindrome(input)) {
       std::cout << "True (It is a permutation of a palindrome)" << std::endl;
   } else {
       std::cout << "False (It is not a permutation of a palindrome)" << std::endl;
   }

   return 0;
}
