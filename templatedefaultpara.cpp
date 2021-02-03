#include<iostream>
using namespace std;
template<class t1=int,class t2=float, class t3=char>
class soham
{
    public:
    t1 a;
    t2 b;
    t3 c;
    soham(t1 x,t2 y,t3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
};

int main()
{
    soham<> s(4,6.4,'a');
    s.display();
    soham<float,char,char> s1(4.6,'c','a');
    s1.display();
    return 0;
}