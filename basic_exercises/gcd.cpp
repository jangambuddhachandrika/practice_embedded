/********************** G_C_D (VERSION 1) ************************
DESCRIPTION: Computes and returns the greatest common divisor
 (g.c.d.) of the arguments passed to it.

PARAMETERS:
 a , b The integers whose g.c.d. will be computed.
RETURNS: If either argument is less than or equal to zero, the
 value zero will be returned as a sentinel to indicate
 an error. If both arguments are strictly positive,
 then their g.c.d. will be returned. Thus, for
 example, if parameter a has the value 28 and b has the
 value 70, then the function will return the value 14.
ALGORITHM: If both arguments are positive, then the smaller of the
 two arguments is tested to see whether it is a divisor
 of both arguments. If it is not, then successively
 smaller integers are tried. If no common divisor
larger
 than 1 is found, then the loop will automatically stop
 with trial_divisor having the value 1 because 1 is a
 divisor of every positive integer.

*******************************************************************/
#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a<=0||b<=0)
    {
        return 0;
    }
    while(b>0)
        {
            int temp = b;
            b = a%b;
            a = temp;
        }
    return a;
}

int main()
{
    int a = 28,b=70;
    int ans = gcd(a,b);
    cout<<ans<<endl;
}