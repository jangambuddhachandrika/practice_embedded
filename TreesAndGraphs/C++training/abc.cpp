#include<bits/stdc++.h>
using namespace std;

class Alpha
{
    public:
        virtual void fun1()=0;
        void fun2(){cout<<"fun2\n";}
};
class Beta:public Alpha{
    public:
    void fun1(){cout<<"Beta fun1\n";}
};
int main()
{
    Alpha*ptr = new Beta();
    ptr->fun1();
    ptr->fun2();
}