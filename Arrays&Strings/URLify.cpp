/*
 * URLify.cpp
 *
 *  Created on: Sep 9, 2024
 *      Author: JANGCHA
 */

#include<bits/stdc++.h>
using namespace std;

void URLify(string& str,int trueLength)
{
	int count =0;
	for(int i=0;i<trueLength;i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	cout<<count<<endl;
	int index = trueLength+count*2;
	for(int i = trueLength-1;i>0;i--)
	{
		if(str[i]==' ')
		{
			str[index-1] = '0';
			str[index-2] = '2';
			str[index-3] = '%';
			index = index-3;
		}
		else
		{
			str[index-1] = str[i];
			index--;
		}
	}
}

int main() {
   // Example string with extra space at the end
   string str = "Mr John Smith    ";  // 16 characters, including extra spaces at the end
   int trueLength = 13;               // True length excluding the extra spaces

   URLify(str, trueLength);

   std::cout << "URLified string: " << str << std::endl;

   return 0;
}

