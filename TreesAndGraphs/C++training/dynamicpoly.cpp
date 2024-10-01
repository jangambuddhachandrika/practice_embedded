#include<iostream>
using namespace std;

int main()
{
    float num =10;
    int* ptr;
    ptr = reinterpret_cast<int*>(&num);
    const int num1 = 20;
    int* ptr1;
    ptr1 = const_cast<int*>(&num1);
}
