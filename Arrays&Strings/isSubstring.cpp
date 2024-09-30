/*
 * isSubstring.cpp
 *
 *  Created on: Sep 9, 2024
 *      Author: JANGCHA
 */
#include<bits/stdc++.h>
using namespace std;
bool isSubstring(string str1,string str2)
{
	str1 = str1+str1;
	return str1.find(str2)!= string::npos;
}


int main() {
   std::string s1 = "waterbottle";
   std::string s2 = "erbottlewat";

   if (isSubstring(s1, s2)) {
       std::cout << s2 << " is a rotation of " << s1 << std::endl;
   } else {
       std::cout << s2 << " is not a rotation of " << s1 << std::endl;
   }

   return 0;
}
