#include <bits/stdc++.h>
using namespace std;

namespace cisco
{
    int a=10;
    namespace abb{
        int a = 20;
    }
}
int main()
{
    cout<<cisco::a<<endl;
    cout<<cisco::abb::a << endl;
    return 0;
}