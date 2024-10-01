#include <iostream>
using namespace std;

class sample{

  int num=10;

 public:

  friend ostream& operator<<(ostream& out, const sample& sob);

};

ostream& operator<<(ostream& out, const sample& sob){

   out<<sob.num<<endl;

   return out;

}



int main(){

 sample ob;

 sample ob1;

 sample ob2;

 cout<<ob<<ob1<<ob2;

}