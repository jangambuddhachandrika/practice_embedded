/************************** R E D U C E ************************
DESCRIPTION: Reduces a positive fraction to lowest terms.

PARAMETERS:
 num, denom The numerator and denominator of the fraction to be
 reduced. These are reference parameters, so the
 arguments passed to them may be changed by the
 function.
RETURNS: 1 if the arguments are both positive, 0 otherwise.
ALGORITHM: If both arguments are positive, then each of them is
 divided by their greatest common divisor.
*******************************************************************/
#include<bits/stdc++.h>
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
        b = b%a;
        a = temp;
    }
    return a;
}
void reduce(int &m,int &n)
{
    int g = gcd(m,n);
    m = m/g;
    n = n/g;

}

int main()
{
    int m =10,n=25;
    reduce(m,n);
    cout<<m<<n<<endl;
    return 0;
}
