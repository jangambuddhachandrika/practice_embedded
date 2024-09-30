// Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
// cannot use additional data structures?


#include <bits/stdc++.h>
using namespace std;


bool IsUnique(string str)
{
    bool charSet[256] = {false};
    if(str.length()>256)
    {
        return false;
    }
    for(int i=0;i<str.length();i++)
    {
        int ch = str[i];
        if(charSet[ch])
        {
            return false;
        }
        charSet[ch] = true;
    }
    return true;
}

bool isUnique(string str)
{
    unordered_set<char>freq;
    for(char i : str)
    {
        if(freq.find(i) == freq.end())
        {
            freq.insert(i);
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool unique(string str)
{
    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                return false;
            }
        }
    }
    return true;
}

int main() {
	// your code goes here
	string str = "abcdef";
   if (unique(str)) {
       cout << "The string has all unique characters." << endl;
   } else {
       cout << "The string does not have all unique characters." << endl;
   }
   return 0;

}
