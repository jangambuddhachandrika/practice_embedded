#include<bits/stdc++.h>

using namespace std;

int factorial(int x)
{
    if(x==1)
    {
        return 1;

    }
    else{
        return x*factorial(x-1);
    }
}

int main()
{
    int num = 5;
    int ans  = factorial(num);
    cout<<"factorial of num is  "<<ans<<endl;
    return 0;
}