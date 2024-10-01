#include<typeinfo>

#include<iostream>

using namespace std;

class myarray{

  int *ptr;

  int size;

 public:

  myarray(){ size=5; ptr=new int[size]; }  // default ctor

 ~myarray(){ delete [] ptr; ptr=nullptr; }  // dtor

  myarray(int size){             // parameterized ctor

     this->size = size;

     ptr = new int[size];

  }

  void set() { for(int i=0;i<size;i++) ptr[i] = 0; }

  void incr(){ for(int i=0;i<size;i++) ptr[i] += 1; }

  void show(){ for(int i=0;i<size;i++) { cout<<ptr[i]<<" "; } cout<<"\n"; }

 myarray(myarray& args){

     // alias of dest "this"

     // alias of src  "args" 

     if(typeid(this)==typeid(args)){

       this->size = args.size;

       this->ptr = new int[this->size];

       for(int i=0;i<this->size;i++)

         this->ptr[i] = args.ptr[i];

     }

 }

};



int main(){

  myarray src;

  src.set();

  src.incr();

  src.show();

  myarray dest = src;

  dest.show();

}


