#include<iostream>
using namespace std;


class base{
    public:
    int var1;
    void display()
    {
        cout<<"the value of class base variable"<<var1<<endl;
    }
};


class derived:public virtual  base
{
    public:
    int var2;
    void display()
    {
        cout<<"the value of class derived variable"<<var2<<endl;
        cout<<"the value of class base variable"<<var1<<endl;
    }
};
int main()
{
    base * baseptr;
    base obj1;
    derived obj2;
    baseptr=&obj2;
    baseptr->var1=45;//baseptr->var2=45; error because pointer is of base class

    baseptr->display();
    derived * derivedptr;
    derivedptr=&obj2;
    derivedptr->var2=89;
    derivedptr->display();
    return 0;
}