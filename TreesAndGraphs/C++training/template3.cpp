#include<iostream>
using namespace std;

template <typename T>

class Sample{

 private:

  T mem1;

  T mem2;

 public:

  void set(T a, T b){mem1=a; mem2=b; }

  void out()    {cout<<"MEM1= "<<mem1<<" MEM2= "<<mem2<<endl; }

};



int main(){

 Sample<int> ob1;

 ob1.set(10,20);

 ob1.out();

}