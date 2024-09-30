/*
 * StringCompression.cpp
 *
 *  Created on: Sep 9, 2024
 *      Author: JANGCHA
 */
#include<bits/stdc++.h>
using namespace std;

string StringCompression(string str)
{
	int count =0;
	string ans = "";
	for(int i=0;i<str.length();i++)
	{
		if(str[i]!=str[i+1])
		{
			count++;
			ans+=str[i];
			ans+=to_string(count);
			count = 0;
		}
		else
		{
			count++;
		}
	}
	return ans.length()>str.length()?str:ans;
}

int main()
{
	string s = "aaabbbbbsssrrrryyy";
	string ans = StringCompression(s);
	cout<<ans<<"       hahahhahahhah"<<endl;
	return 0;
}
