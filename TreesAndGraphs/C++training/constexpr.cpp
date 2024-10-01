#include<bits/stdc++.h>

using namespace std;

auto square = [](int x){return x*x;};
int main()
{
    int arr[] = {10,20,30,40,50};
    transform(begin(arr),end(arr),begin(arr),[](int x){return x+1;});
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    int a =10;
    auto fptr = [&a](int b){int c = a+b;a++;cout<<c<<endl;};
    fptr(20);
    cout<<a<<endl;
}