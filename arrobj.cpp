#include<iostream>
using namespace std;


class shop
{
    int id;
    float price;
    public: void getdata(int a,float b)
    {
        id=a;
        price=b;
    }
    void display(void)
    {
        cout<<"the id of the item"<<id<<endl;
        cout<<"the price of the item is"<<price<<endl;
    }
};



int main()
{
    int d;
    float p;
    shop *ptr=new shop[3];
    shop *ptrtemp=ptr;
    for (int i = 0; i < 3; i++)
    {
        cout<<"enter id and price of item"<<i+1<<endl;
        cin>>d>>p;
        ptr->getdata(d,p);
        ptr++;
    }
    for (int j = 0; j < 3; j++)
    {
        cout<<"item number:"<<j+1<<endl;
        ptrtemp->display();
        ptrtemp++;
    }
    
    
    return 0;
}