/*
 * OneEditAway.cpp
 *
 *  Created on: Sep 9, 2024
 *      Author: JANGCHA
 */

#include<bits/stdc++.h>
using namespace std;

bool oneEditReplace(string str1,string str2){
	bool foundDifference = false;
	for(int i=0;i<str1.length();i++)
	{
		if(str1[i]!=str2[i]){
			if(foundDifference)
			{
				return false;
			}
			foundDifference = true;
		}
	}
	return true;

}

bool oneEditInsertRemove(const std::string& s1, const std::string& s2) {
    int index1 = 0, index2 = 0;
    while (index1 < s1.length() && index2 < s2.length()) {
        if (s1[index1] != s2[index2]) {
            if (index1 != index2) {
                return false;
            }
            index2++; // Move the pointer of the longer string
        } else {
            index1++;
            index2++;
        }
    }
    return true;
}



bool OneEditAway(string str1,string str2)
{
	if(abs(str1.length()-str2.length())>1)
	{
		return false;
	}
	else
	{
		if(str1.length()+1 == str2.length())
				{
			    return oneEditInsertRemove(str1, str2);
				}
		else if(str1.length() == str2.length()+1)
		{
			return oneEditInsertRemove(str2, str1);
		}
		else if(str1.length()==str2.length())
			{
			return oneEditReplace(str1,str2);
			}
	}

}

int main() {
   std::string s1 = "pale";
   std::string s2 = "ple";

   if (OneEditAway(s1, s2)) {
       std::cout << "True (The strings are one edit away)" << std::endl;
   } else {
       std::cout << "False (The strings are not one edit away)" << std::endl;
   }

   return 0;
}


