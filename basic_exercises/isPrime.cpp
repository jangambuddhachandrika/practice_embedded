/************************* I S P R I M E ***********************
DESCRIPTION: Determines whether an integer is prime.

PARAMETER:
 n The integer to be examined to see whether it is prime.
RETURNS: 1 if the integer n is prime; otherwise it returns 0.
ALGORITHM: If n is less than or equal to 1, then it is not prime.
 If n is greater than 1, then trial divisors, starting
 with 2 and going no farther than n-1 are examined to
 determine whether they divide n. If no divisor less
 than n is found, then n is prime.
*******************************************************************/
#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num = 5;
    if(isPrime(num))
    {
        cout<<"yeah! its a prime number buddy!"<<endl;
    }
    else{
        cout<<"Nope!! it is not a prime"<<endl;
    }
    return 0;
}