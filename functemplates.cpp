#include<iostream>
using namespace std;

// template <class t1,class t2>
// float funcavg(t1 a,int b)
// {
//     float avg=(a+b)/2;
//     return avg;
// }
template <class t>
void swapp(t &a,t &b)
{
    t temp;
    temp=a;
    a=b;
    b=temp;
}

// float funcavg2(t1 a,t2 b)
// {
//     float avg=(a+b)/2.0;
//     return avg;
// }


int main()
{
    // float a;
    // a=funcavg2(5.5,2);
    // cout<<"the average is "<<a;
    float x=5.6,y=7.9;
    swapp(x,y);
    cout<<"x= "<<x<<" y= "<<y<<endl;
    return 0;
}