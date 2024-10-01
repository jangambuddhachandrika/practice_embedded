#include<iostream>

using namespace std;

class sample
{
    private: 
        sample(const sample& args){}
        sample & operator=(const sample&args){return *this;}
    public:
        sample(){}
    
};

int main()
{
    sample boj;
    
}