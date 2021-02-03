#include<iostream>
using namespace std;


    class complex{
        public:
        int real,imaginary;
        void getdata()
        {
            cout<<"the real part is"<<real<<endl;
            cout<<"the imaginary is"<<imaginary<<endl;

        }
        void setdata(int a,int b)
        {
            real=a;
            imaginary=b;
        }

    };

int main()
{
    complex c1;
    complex *ptr=new complex;
    ptr->setdata(1,8);
    (*ptr).getdata();
    return 0;
}