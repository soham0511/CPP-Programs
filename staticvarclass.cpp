#include<iostream>
using namespace std;

class emp
{
    static int count;
    int id;
    public:
    void setdata()
    {
        cout<<"enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata()
    {
        cout<<"the id id "<<id<<" and this is employee number "<<count<<endl;
    }
    static void getcount(){
        cout<<"the value of count is"<<count<<endl;
    }
};
int emp:: count=1000;
int main()
{
    emp s;
    emp d;
    emp r;
    s.setdata();
    s.getdata();
emp::getcount();
    d.setdata();
    d.getdata();
emp::getcount();
    r.setdata();
    r.getdata();
    emp::getcount();
    return 0;
}