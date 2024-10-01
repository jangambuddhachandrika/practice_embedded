#include<bits/stdc++.h>
using namespace std;


class mytime
{
    int hours;
    int mins;
    int secs;
 public:
    mytime(int a=0,int b=0,int c=0):hours(a),mins(b),secs(c){};

    void show()
    {
        cout<<hours<<"  hours- "<<mins<< " mins "<<secs<<" secs "<<endl;
    }
    mytime operator+ (const mytime& obj2)
    {
        int h = hours+obj2.hours;
        int m= mins+obj2.mins;
        int s = secs+obj2.secs;
        return mytime(h,m,s);
    }
};





int main()
{
    mytime t1(10,20,30);
    mytime t2(1,2,3);
    mytime t3;
    t3 = t1+t2;
    t1.show();
    t2.show();
    t3.show();
    return 0;
}