#include<iostream>
using namespace std;

class Alpha{

  int a=10;

 public:

  virtual void show(){ cout<<"A = "<<a<<endl; }

};

class Beta:public Alpha{

  int b=20;

 public:

  void show(){ cout<<"B = "<<b<<endl; }

};

int main(){

 Alpha *ptr;

 ptr = new Beta();

 ptr->show();

}

