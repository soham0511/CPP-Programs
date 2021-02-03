#include <iostream>
using namespace std;
int sum(int a ,int b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}
    int main()
    {
        cout<<"the sum is"<<sum(5,8)<<endl;
        cout<<"the sum is "<<sum(3,5,6)<<endl;
    }