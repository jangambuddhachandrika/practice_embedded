#include <iostream>

#include <vector>

#include <typeinfo>



using namespace std;

class Alpha{

  public:

   virtual void fun1(){ cout<<"Alpha fun1\n"; }

   void fun2()    { cout<<"Alpha fun2\n"; }

};

class Beta:public Alpha{

  public:

   void fun1() { cout<<"Beta fun1\n"; }

   void fun3() { cout<<"Beta fun3\n"; }

};

class Delta : public Beta{

  public:

   void fun1() { cout<<"Delta fun1\n"; }

   void fun4() { cout<<"Delta fun4\n"; }

};

int main(){

 vector<Alpha*> vob;

 vob.push_back(new Alpha());

 vob.push_back(new Beta());

 vob.push_back(new Delta());

 for(auto ptr:vob){

   ptr->fun1();

   ptr->fun2();

   if(typeid(*ptr)==typeid(Beta))
   {

     Beta *bptr = dynamic_cast<Beta*>(ptr);

     if(bptr!=nullptr)

       bptr->fun3();

   }

   else if(typeid(*ptr)==typeid(Delta)){

     Delta *dptr = dynamic_cast<Delta*>(ptr);

     if(dptr!=nullptr)

       dptr->fun4();

   }

 }

}

