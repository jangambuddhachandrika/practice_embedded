#include<iostream>
using namespace std;

class Alpha
{

    public:
        int a =10;
        void show(){cout<<"A  "<<a<<endl;}
};

class Beta:public Alpha{

    public :
        int b = 20;
        void show(){cout<<"b  "<<b<<endl;}
};

int main()
{
    Beta ob;
    Beta* bptr = &ob;
    ob.a = 100;
    ob.b = 200;
    cout<<ob.a<<"\n"<<ob.b<<endl;
    Alpha dest = ob;
    cout<<dest.a<<endl;
    Alpha *aptr = bptr;
    cout<<aptr->a<<"\n";
    // Access Beta members via typecasting
    Beta* betaPtr = static_cast<Beta*>(aptr);
    cout << betaPtr->b << endl;

}