#include<iostream>
using namespace std;


template <class t>
class soham
{
    public:
    t data;
    soham(t a)
    {
        data=a;
    }
    void display();
};
template <class t>

void soham<t>::display()
    {
cout<<data<<endl;;
    }
void func1(int a)
{
    cout<<"this is first func()"<<a<<endl;
}
template <class t>
void func1(int a)
{
    cout<<"this is templatized func()"<<a<<endl;
}

int main()
{
//     soham<float>s(5.6);
//     cout<<s.data;
// s.display();
// soham<char>s1('c');
// cout<<s1.data;
// s1.display();
func1(4);
    return 0;
}