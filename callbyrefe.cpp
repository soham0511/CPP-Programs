#include <iostream>
using namespace std;

int sum(int a,int b)
{
    return (a+b);
}
void swap(int &a, int &b)
{
    
    int temp=a;
    a=b;
     b=temp;
}

int main()
{
   
   int num1,num2;
        cout<<"enter the number 1"<<endl;
        cin>>num1;
        cout<<"enter the number 2"<<endl;
        cin>>num2;
        
        cout<<"the value of a"<<num1<<"the value of b"<<num2<<endl;
        cout<<"sum is"<<sum(num1,num2)<<endl;
        swap(num1,num2);
        
        cout<<"the value of a"<<num1<<"the value of b"<<num2<<endl;
    return 0;    
}