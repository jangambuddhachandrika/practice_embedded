#include<iostream>

using namespace std;

class Emp{

 private:

  int eid;

  string name;

 public:

  Emp(){ cout<<"Emp ctor called\n"; }

  ~Emp(){ cout<<"Emp dtor called\n"; }

  void set(int a, string b){

     eid=a;

     name=b;

  }

  void show(){ 

     cout<<eid<<" "<<name<<endl;

  }

};



class Another{

  Emp *eptr;

 public:

  Another(Emp *args){

   eptr = args;

  }

  ~Another(){ delete eptr; }

  Emp* operator->(){ return eptr; }

};



int main(){

 Another ptr(new Emp());

 ptr->set(1,"hari");

 ptr->show();

}