#include<bits/stdc++.h>
using namespace std;



class Product
{
    private:
        string name;
        string ctgry;
        int qty;
        static int total;
    public:
     Product(string a,string b,int c):name(a),ctgry(b),qty(c){
        total = total+qty;
     }
     static void show()
     {
        cout<<"Total= "<<total;
     }
};
int Product :: total;
int main()
{
    Product p1("DVD","stor",10);
    Product p2("DVD","stor",10);
    Product p3("DVD","stor",10);
    Product p4("DVD","stor",10);
    Product p5("DVD","stor",10);
    Product::show();


}