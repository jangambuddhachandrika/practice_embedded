#include<iostream>

using namespace std;

class sample
{
    public:
        sample(){cout<<"Default ctor\n";}
};

int main()
{
    sample ob;
}
// if the constructor is private we cannot create ob on stack and we cannot create ob on heap.