#include <iostream>
#include<cmath>
using namespace std;

class standardcalculator
{
    int a, b;
    public:
    void inputstand()
    {
        cout << "enter the 1st number for standard" << endl;
        cin >> a;
        cout << "enter the 2nd number for standard" << endl;
        cin >> b;
        add(a,b);
        subtract(a,b);
        mult(a,b);
        divide(a,b);
    }


    int add(int a, int b)
    {
        cout<<"the value of sum "<< (a + b)<<endl;
    }
    int subtract(int a,int b)
    {
        cout<<"the value of difference " <<(a-b)<<endl;
    }
    int mult(int a,int b)
    {
        cout<<"the value of product "<< (a*b)<<endl;
    }
    int divide(int a,int b)
    {
        cout<<"the value of division "<< (a/b)<<endl;
    }
};

class scientificcalculator 
{
    int a;
    public:
    void inputscifi()
    {
        cout << "enter the number to find square root " << endl;
        cin >> a;
        squareroot(a);
    }
    
    double squareroot(int a)
    {
       
                cout<<"the square root is "<<sqrt(a)<<endl;
    }
};

class hybrid : public scientificcalculator,public standardcalculator
{
};

int main()
{
    hybrid h;
    h.inputstand();
    h.inputscifi();
   
    return 0;
}