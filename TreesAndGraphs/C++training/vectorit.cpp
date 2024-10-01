#include<vector>

#include<algorithm>
#include<bits/stdc++.h>
using namespace std;



int main(){

 vector<int> vob;

 cout<<"SIZE = "<<vob.size()<<endl;

 cout<<"CAP = "<<vob.capacity()<<endl;

 vob.push_back(20);

 vob.push_back(40);

 vob.push_back(50);

 vob.push_back(30);

 vob.push_back(60);

 vob.push_back(10);



 sort(vob.begin(), vob.end());



 vob.pop_back();

 

 for(int i=0;i<vob.size();i++)

  cout<<vob[i]<<" ";

 cout<<endl;



 vector<int>::iterator it;

 for(it=vob.begin(); it!=vob.end(); ++it)

  cout<<(*it)<<" ";

 cout<<endl;



 vector<int>::reverse_iterator it1;

 for(it1=vob.rbegin(); it1!=vob.rend(); ++it1)

  cout<<(*it1)<<" ";

 cout<<endl;

}

