#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int res = 0;
    while(n--)
    {
        int cnt = 0;
        for(int i=0;i<=2;i++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                cnt++;
            }
            
        }
        if(cnt>=2)
        {
            res++;
        }
    }
    cout<<res<<endl;
    return 0;
}