#include <iostream>



using namespace std;


class Employee
{
    string name;
    string dep;
    protected:
        int pay;

    public:
    void set(string name,string dep,int pay)
    {
        this->name = name;
        this->dep = dep;
        this->pay = pay;
    }
    void show()
    {
        cout<<name<<"\n"<<pay<<"\n"<<dep<<"\n";
    }
};


class SoftEng : public Employee
{
    string projname;
    int basic_pay = pay;
    int pf = 0.1*(basic_pay);
    int netpay = basic_pay - pf;
    public:
    void set_values(string projname)
    {
        this->projname = projname;
    }
    void display()
    {
        cout<<projname<<"\n"<<pf<<"\n"<<netpay<<endl;
    }
};

int main()
{
    SoftEng ob;
    ob.set("arun","benz",6500);
    ob.set_values("QnA");
    ob.show();
    ob.display();
}