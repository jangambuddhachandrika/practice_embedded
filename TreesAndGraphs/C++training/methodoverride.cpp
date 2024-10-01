#include<iostream>
using namespace std;

class Alpha
{
    public:
        void fun1(){cout<<"Alpha fun1 \n";}
        void fun2(){cout<<"alpha fun2 \n";}
};

class Beta:public Alpha{
    public :
        void fun3(){cout<<"Beta fun3 \n";}
        void fun1(){cout<<"Beta fun1 \n";}
};

int main()
{
    Beta ob;
    ob.fun1();
    ob.fun2();
    ob.fun3();
}