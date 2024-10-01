/********************** D I G I T N A M E ***********************
DESCRIPTION: _Prints the English name of an integer from 1 to 9.

PARAMETER:
 n The integer whose English name will be printed.
RETURNS: Void (no value).
ALGORITHM: A switch statement selects the appropriate word.
 If "n" is not in the range 1,2,3,...,9, then an
 error phrase is printed.
AUTHOR: W. Knight
*******************************************************************/

#include<bits/stdc++.h>
using namespace std;


void Digitname(int n)
{
    switch(n)
    {
        case 1: cout<<"one"<<endl; break;
        case 2: cout<<"two"<<endl; break;
        case 3: cout<<"three"<<endl; break;
        case 4: cout<<"four"<<endl; break;
        case 5: cout<<"five"<<endl;break;
        case 6: cout<<"six"<<endl;break;
        case 7: cout<<"seven"<<endl;break;
        case 8: cout<<"eight"<<endl;break;
        case 9: cout<<"nine"<<endl;break;
        default : cout << "digit error" << endl;

    }
}

int main()
{
    int num = 9;
    Digitname(num);
    return 0;
}