/******************* S U M F R O M T O ***********************
DESCRIPTION: Computes and returns the sum of all the integers
 between "first" and "last" inclusive.
PARAMETERS:
 first, last The two "endpoints" of the sequence of integers to be
 summed.
RETURNS: Returns the sum of all the integers from "first" to
 "last". For example, if first is 9 and last is 12
 then the function will return 42 ( = 9+10+11+12).
 If first is 11 and last is 8, then the function
 will return 38 ( = 11+10+9+8). If first is 5 and
 last is 5, the function will return 5.
ALGORITHM: If first <= last, the addition begins at first and
 goes up to last. If, instead, first > last, then the
 addition begins at first and goes down to last.
*******************************************************************/



#include<iostream>
using namespace std;

int sum_to_last(int first,int last)
{
    int sum = 0;
    if(first<=last)
    {
        for(int i=first;i<=last;i++)
        {
            sum+=i;
        }
    }
    else{
        for(int i= last;i<=first;i++)
        {
            sum+=i;
        }
    }
    return sum;
}

int main()
{
    int first = 7;
    int last = 4;
    int res = sum_to_last(first,last);
    cout<<res<<endl;
}