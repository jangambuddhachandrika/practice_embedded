#include <iostream>

#include <algorithm>



using namespace std;





template <class T,int size>

class myarray{

 private:

  T *ptr=nullptr;

 public:

  myarray(){ ptr=new T[size]; }

  ~myarray(){ delete[] ptr;  }

  void set() { for(int i=0;i<size;i++) ptr[i] = 0;    } 

  void show(){ for(int i=0;i<size;i++) cout<<ptr[i]<<" "; cout<<endl; }

};



int main(){

 myarray<int,5> ob;

 ob.set();

 ob.show();

  

 myarray<int,2> ob1;

 ob1.set();

 ob1.show();

  

}