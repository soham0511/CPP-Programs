#include<iostream>
using namespace std;
template<class t>
class vector
{
   
    public:
     t* arr;
    int size;
    vector(int m)
    {
        size=m;
        arr=new t [size];
    }
    t dotvec( vector &v)
    {
        t d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
            
        }
        return d;
    }
};

int main()
{
    vector <double> v1(3);
    v1.arr[0]=5.1;
    v1.arr[1]=2.6;
    v1.arr[2]=4.5;

    vector <double> v2(3);
    v2.arr[0]=3.4;
    v2.arr[1]=5.1;
    v2.arr[2]=8.5;
    float a=v1.dotvec(v2);
    cout<<a<<endl;
    return 0;
}