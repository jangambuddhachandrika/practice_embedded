#include <iostream>



using namespace std;



class Alpha{

   

 public:

  int a=0;

  Alpha()         { cout<<"Alpha Ctor called\n"; }

  Alpha(int a)      { cout<<"Alpha Para Ctor called\n"; this->a = a; }

  Alpha(const Alpha& args){ cout<<"Alpha Copy Ctor called\n"; this->a = args.a;}

  ~Alpha(){ cout<<"Alpha Dtor called\n"; }

};



class Beta : public Alpha{

  public:

  int b=0;

  Beta()        { cout<<"Beta Ctor called\n";   }

  Beta(int b):Alpha(0) { cout<<"Beta Para Ctor Called\n"; this->b = b;}

  Beta(const Beta& args):Alpha(args){ cout<<"Beta Copy Ctor called\n"; this->b = args.b;}

  ~Beta()        { cout<<"Beta Dtor called\n";   }

};



int main(){

 Beta ob1(20);

 ob1.a = 10;

 cout<<"A = "<<ob1.a<<" B = "<<ob1.b<<endl;

 

 Beta ob2 = ob1;

 cout<<"A = "<<ob2.a<<" B = "<<ob2.b<<endl;

}

