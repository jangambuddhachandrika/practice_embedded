#include <iostream>

using namespace std;

class Alpha{

 public:

  Alpha(){ cout<<"Alpha Ctor called\n"; }

  ~Alpha(){ cout<<"Alpha Dtor called\n"; }

};

class Beta : virtual public Alpha{

  public:

  Beta(){ cout<<"Beta Ctor called\n"; }

  ~Beta(){ cout<<"Beta Dtor called\n"; }

};

class Delta:virtual public Alpha{

  public:

  Delta(){ cout<<"Delta Ctor called\n"; }

  ~Delta(){ cout<<"Delta Dtor called\n"; }

};



class Omega : public Beta, public Delta{

  public:

  Omega(){ cout<<"Omega Ctor called\n"; }

  ~Omega(){ cout<<"Omega Dtor called\n"; }

};



int main(){

  Omega ob;

}