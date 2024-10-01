#include <iostream>



using namespace std;





class Beta;  // FORWARD REFERENCEs

class Alpha{

 int a=10;

 public:

 void show(){ cout<<"A = "<<a<<endl; }

 Alpha add(const Beta& args);

};





class Beta{

 int b=20;

 public:

 void show(){ cout<<"B = "<<b<<endl; }

 friend class Alpha;

};

Alpha Alpha::add(const Beta& args){

    Alpha res;

    res.a = a + args.b;

    return res;

}

int main(){

 Alpha aob;

 Beta bob;

 Alpha ans = aob.add(bob);

 ans.show();

}

