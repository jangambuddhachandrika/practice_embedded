#include<iostream>
using namespace std;

class sample
{
    public:
    void fun1(){}
    void fun1(int a){}
    void fun1(int a, int b){cout<<"this is called"<<endl;}

};

int main()
{
    sample ob;
    ob.fun1(5,6);
}