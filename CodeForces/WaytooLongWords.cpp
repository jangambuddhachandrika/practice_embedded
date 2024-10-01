#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<string>result;
    for(int i=0;i<n;i++)
    {
        string ans;
        cin>>ans;
        result.push_back(ans);
    }
    for(string i : result)
    {
        string ans = "";
        if(i.size()>10)
        {
            ans+=i[0];
            cout<<ans;
            int sum = i.size()-2;
            cout<<sum;
            ans= i.back();
            cout<<ans;
            
        }
        else{
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}