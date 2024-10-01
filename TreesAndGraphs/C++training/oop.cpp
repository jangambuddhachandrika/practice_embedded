#include<bits/stdc++.h>

using namespace std;


class Car
{
private:
    string regnum;
    string name;
    string color;
    int stock;
public:
    void set(string regnum,string name,string color,int stock)
    {
        this->regnum = regnum;
        this->name   = name;
        this->color  = color;
        this->stock  = stock;

    }
    void show()
    {
        cout<<regnum<<" " <<name<<" "<<color<<" "<<stock<<endl;
    }
};

int main()
{
    Car obj;
    cout<<sizeof(obj)<<endl;
    string regnum = "KA-01-AA1234";
    string name = "Mercedes";
    string color  ="black";
    int stock = 1;
    obj.set(regnum,name,color,stock);
    obj.show();
}