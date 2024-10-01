#include<bits/stdc++.h>

using namespace std;


class sample{
    private:
        sample(){cout<<"Default ctor\n";}
    public:
        void show(){cout<<"show called\n";}
        static sample* create_object()
        {
            return  new sample();
        }
};

int main()
{
    sample *obj = sample::create_object();
    obj.show();
}