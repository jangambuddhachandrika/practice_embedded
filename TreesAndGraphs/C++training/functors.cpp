#include<iostream>>
using namespace std;

class sample
{
    private:
        int num=10;
    public:
        void show(){cout<<"show called= "<<num<<endl;}
        void operator()(){show();
        }
};

int main()
{
    sample ob;
    ob();
}