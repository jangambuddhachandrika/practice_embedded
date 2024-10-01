#include<iostream>
using namespace std;


class Team{

 string name="alpha";

 string loc="bengaluru";

 int size=10;

 public:

 void show(){ cout<<name<<loc<<size<<"\n"; }  
 int& operator [](int index)   {
 return size;}

};



int main(){

 Team t1;

 t1.show();

 cout<<"Team size = "<<t1[0]<<endl;
 t1[0]=25;
 cout<<"Team size = "<<t1[0]<<endl;


}