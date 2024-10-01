#include<iostream>

using namespace std;

class Alpha{

 public:

  virtual void fun1(){ cout<<"Alpha FUN-1 called\n"; }

  void fun2()    { cout<<"Alpha FUN-2 called\n"; }

};

class Beta:public Alpha{

 public:

  void fun1(){ cout<<"Beta FUN-1 called\n"; }

  void fun3(){ cout<<"Beta FUN-3 called\n"; }

};

int main(){

 Alpha *ptr;

 ptr = new Beta();

 ptr->fun1();

 ptr->fun2();
 Beta *ptr2;
 ptr2 = dynamic_cast<Beta*>(ptr);

 ptr2->fun3();

}