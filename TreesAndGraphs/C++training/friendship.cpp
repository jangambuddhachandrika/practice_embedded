#include<bits/stdc++.h>
using namespace std;

class Beta;
class Alpha{

 int a=10;

 public:

 void show(){ cout<<"A = "<<a<<endl; }
 friend void add(const Alpha& op1 , const Beta& op2);

};



class Beta{

 int b=20;

 public:

 void show(){ cout<<"B = "<<b<<endl;} 
 friend void add(const Alpha& op1 , const Beta& op2);

};



void add(const Alpha& op1 , const Beta& op2){

 int res = op1.a + op2.b;

 cout<<res;

}



int main(){

 Alpha aob;

 Beta bob;

 add(aob,bob);

}

