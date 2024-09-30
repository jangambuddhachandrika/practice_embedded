/*
 * Check_Palindrome.cpp
 *
 *  Created on: Sep 9, 2024
 *      Author: JANGCHA
 */

#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str1,string str2){
	if(str1.length()!=str2.length())
	{
		return false;
	}
	else
	{
		sort(str1.begin(),str1.end());
		sort(str2.begin(),str2.end());
	}
	return str1==str2;

}

bool check_palindrome(string str1,string str2)
{
	unordered_map<char,int>freq;
	for(char i : str1)
	{
		freq[i]++;
	}
	for(char j : str2)
	{
		freq[j]--;
		if(freq[j]<0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string str1 = "abcdefghi";
	string str2 = "ihabcdefg";
	if(check_palindrome(str1,str2))
	{
		cout<<"haha you did it!!!!"<<endl;
	}
	else
	{
		cout<<"hahah not a palindrome!!!!"<<endl;
	}
	return 0;
}


