#include <iostream>



using namespace std;



class Alpha{

  int a;

public:

  void fun2(){ cout<<"Alpha fun2\n"; }   

};

class Beta : public Alpha {

  int b;

 public:

  void fun1(){ cout<<"Beta Fun1\n"; }

};

int main(){

  cout<<sizeof(Alpha)<<endl;

  cout<<sizeof(Beta)<<endl;

  Beta ob;

  ob.fun1();

  ob.fun2();

}