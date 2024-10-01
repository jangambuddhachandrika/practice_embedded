
#include<bits/stdc++.h>
using namespace std;



class Emp{

    private:
        string name;
        string place;
        int salary;
        static int avgslary;
        static int count;
        static int total;
    public:
        Emp(string a,string b,int c):name(a),place(b),salary(c){
            count++;
            total = total+salary;
        }
        ~Emp()
        {
            total-=salary;
            count--;
        }
        static void avg_salary()
        {
            avgslary = total/count;
            cout<<"average  = "<<avgslary <<endl;

        }


};


int Emp :: avgslary;
int Emp :: count = 0;
int Emp :: total = 0;


int main()
{
    Emp e1("a","b",100);
    Emp e2("c","d",100);
    Emp e3("f","h",100);

    Emp::avg_salary();
    Emp *e4 = new Emp("i","j",200);
    Emp::avg_salary();
    delete e4;
    Emp::avg_salary();
}