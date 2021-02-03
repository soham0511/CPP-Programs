#include <iostream>
using namespace std;
template <class t1, class t2>
class myclass
{
public:
    t1 data1;
    t2 data2;
    myclass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 <<"  "<< data2 << endl;
    }
};

int main()
{
    myclass<int, float> obj1(1, 1.6);
    obj1.display();
    myclass<int, char> obj2(1, 'A');
    obj2.display();
    myclass<int, double> obj3(1, 3.14159);
    obj3.display();
    return 0;
}