#include<iostream>
using namespace std;

class employee{
    
    public:
    employee(){}
    int id;
    float salary;
    employee(int inpid)
    {
        id=inpid;
        salary=34.0;
    }
    
};

class programmer: public employee
{
   
    public:
    void getdata()
    {
        
        cout<<id<<endl;
    }
    programmer(int inpid){
        id=inpid;
    }
     int languagecode=9;
    
};

int main()
{
    employee a(1),b(2);
    cout<<a.salary<<endl;
    cout<<(b.salary)<<endl;
    programmer skillf(1);
    cout<<skillf.languagecode<<endl;
    skillf.getdata();
    cout<<skillf.id<<endl;
    return 0;
}