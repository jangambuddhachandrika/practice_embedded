#include<iostream>

using namespace std;

class sample
{
    ~sample(){cout<<"Default dtor\n";}
    public:
        void dummydtor(){delete this;cout<<"Dtor called\n";}
};

int main()
{
    sample *ob1 = new sample();
    ob1->dummydtor();
}
// since the destructor is private we cannot create the stack objects but we can create heap objects with the dummy destructor.