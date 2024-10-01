#include<bits/stdc++.h>
using namespace std;

class Emp{

  string name;

  string loc;

 public:

  Emp(string a="None", string b="None"):name(a),loc(b){ }

  void set(string a="None", string b="None"){ name=a; loc=b; }

  void show(){ cout<<name<<" "<<loc<<endl; }

  string getname(){ return name; }

};



template <class T, class CMP>

void sort(T arr[], int size,CMP compare){

 T temp;

 for(int i=0;i<size;i++){

 for(int j=i+1;j<size;j++){

  if(compare(arr[i],arr[j])){

   temp = arr[i];

   arr[i]=arr[j];

   arr[j]=temp;

   }

  }

 }

}





int main(){

  int a[] = {50,30,40,25,10,20};

  sort(a,6,[](int a, int b){ return a>b;});

  for(auto i:a)

    cout<<i<<" ";

  cout<<endl;

   

  float b[] = {4.5, 2.5, 1.5, 5.5, 3.5, 2.0 };

  sort(b,6,[](float a, float b){ return a>b;});

  for(auto i:b)

    cout<<i<<" ";

  cout<<endl;

   

  string c[] = {"chn","blr", "del", "mum", "tpur", "hyd" };

  sort(c,6,[](string a, string b){ return a>b;});

  for(auto i:c)

    cout<<i<<" ";

  cout<<endl;

   

  Emp d[3];

  d[0].set("hari","del");

  d[1].set("john","mum");

  d[2].set("arun","blr");

  sort(d,3,[](Emp a, Emp b){ return a.getname()>b.getname();});

  for( auto i:d)

    i.show();

   

}