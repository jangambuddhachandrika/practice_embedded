#include<list>
#include<bits/stdc++.h>
using namespace std;


int main(){

 list<int> lob;

 lob.push_back(10);  

 lob.push_back(50);

 lob.push_front(20);

 lob.push_front(40);

 lob.push_front(30);

 

 list<int>::iterator it;

 for(it=lob.begin(); it!=lob.end(); ++it)

  cout<<(*it)<<" ";

 cout<<endl;

 lob.pop_back();

 lob.pop_front();

 for(auto i:lob)

  cout<<i<<" ";

 cout<<endl;

 lob.sort();

 for(auto i:lob)

  cout<<i<<" ";

 cout<<endl;

   

}

