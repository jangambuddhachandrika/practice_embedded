
#include<typeinfo>

#include<iostream>

using namespace std;

int main()
{
    string src = "begnahidji";
    cout<<src<< "before"<<endl;
    string dets = std::move(src);
    cout<< src <<"after"<<endl;
    cout<<dets<<"des"<<endl;
}