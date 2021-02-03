#include<iostream>
using namespace std;

class number
{
    int a;
    public:
     number(){
         a=0;
     }
     
     number(int num)
     {

         a=num;
     }
     number(number &obj)
     {
         cout<<"copy const called"<<endl;
         a=obj.a;
     }
      void display()
    {
        cout<<"the number for this object "<<a<<endl;  
    }
};
int main()
{
    number x,y,z(45);
    x.display();
    y.display();
    z.display();
    number z1(z);
    z1.display();
   number z2=y;
   z2.display();
    return 0;
}