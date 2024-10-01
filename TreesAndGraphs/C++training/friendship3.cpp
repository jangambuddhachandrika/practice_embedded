#include <iostream>



using namespace std;





class Beta;  // FORWARD REFERENCEs

class Alpha{

 int a=10;

 public:

 void show(){ cout<<"A = "<<a<<endl; }
 friend class Beta;



};





class Beta{

 int b=20;

 public:

 void show(){ cout<<"B = "<<b<<endl; }
 Beta add(const Alpha& args);

 friend class Alpha;

};

Beta Beta::add(const Alpha& args){

    Beta res;

    res.b = args.a + b;

    return res;

}

int main(){

 Alpha aob;

 Beta bob;

 Beta ans = bob.add(aob);

 ans.show();

}

