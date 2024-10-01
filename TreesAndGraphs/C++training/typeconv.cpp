#include<iostream>
using namespace std;


class sample
{
    private:
      int num =10;
    public:
        sample(){}
        explicit sample(int args){num=args;}
        void show(){cout<<"show called"<<endl;}
        operator int(){return num;}
};

int main()
{
    sample ob1;
    sample b(20);
    sample ob2 = ob1;
    int a =9;
    int res = ob1;
    int c = ob1+a;
    cout<<"RES = "<<res<<endl;
    cout<<c<<endl;
}