#include <iostream>



using namespace std;



template <class T1, class T2>

void add(T1 arg1, T2 arg2){

  T1 res;

  res = arg1 + arg2;

  cout<<"RESULT = "<<res<<endl;

}

template <>

void add(double a, int b){

  cout<<"I AM A SPECIAL FUNCTION\n";

}



int main(){

  string a="india", b="blr";

  add(a,b);     // T1=string  T2=string

  int data1=10;

  double data2=20;

  add(data1,data2); // T1=int   T2=double

           // void add(int a, double b)

  //          // void add(T,T) - template instance

   add(data2, data1); 

}