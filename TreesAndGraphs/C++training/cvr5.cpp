#include<iostream>

using namespace std;

class sample
{
    private: 
        sample(const sample& args)=delete;
        sample & operator=(const sample&args)=delete;
    public:
        sample(){}
    
};

int main()
{
    sample boj;
    
}