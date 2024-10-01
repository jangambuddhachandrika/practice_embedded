/************************** E N O U G H ***********************
DESCRIPTION: Computes and returns the smallest positive integer n
 for which 1+2+3+...+n equals or exceeds the value of
 "goal".
PARAMETER:
 goal The integer which 1+2+3+...+n is required to meet or
 exceed.
RETURNS: Returns the smallest positive integer n for which
 1+2+3+...+n equals or exceeds "goal". For example, if
 goal has the value 9, then the function will return 4
 because 1+2+3+4 >= 9 but 1+2+3 < 9. If goal has a
value
 less than or equal to 1, then the function will return
 the value 1.
ALGORITHM: First the value n = 1 is tried to see if 1 >= goal.
 If that is not true, then successively larger values
 of n are added to a summing variable until that sum
 reaches or exceeds goal.
*******************************************************************/

#include<bits/stdc++.h>

using namespace std;

int enough(int goal)
{
    int sum = 1,n=1;
    while(sum<goal)
    {
        n++;
        sum+=n; 
    }
    return n;
    
}
int main()
{
    int goal = 9;
    int pos_num = enough(goal);
    cout<<pos_num<<endl;
}