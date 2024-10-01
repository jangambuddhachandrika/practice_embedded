#include<bits/stdc++.h>

using namespace std;


class student
{
    private:
    string name;
    string place;
    int marks[4];
    int total = 0;
    public:
    void set(string name,string place,int marks[])
    {
        this->name = name;
        this->place = place;
        for(int i=0;i<5;i++)
        {
            this->marks[i]=marks[i];
        }
    }
    int find_total()
    {
        for(int i=0;i<5;i++)
        {
            total+=marks[i];
        }
        return total;
    }
    bool compare_total(const student& args)
    {
        cout<<total;
        if(total>args.total)
        {
            return true;
        }
        else{
            return false;
        }
    }
    void show()
    {
        cout<<name<<" " <<place<<" "<<endl;
    }
    
};


int main()
{
    int marks1[] = {10,20,30,40};
    int marks2[] = {50,60,70,80};
    student st1;
    student st2;
    st1.set("arun","blr",marks1);
    st2.set("hari","chn",marks2);
    st1.find_total();
    st2.find_total();
    if (st1.compare_total(st2))
    {
        st1.show();
    }
    else{
        st2.show();
    }
}