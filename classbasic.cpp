#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getdata()
    {
        cout << "the value of a" << a << endl;
        cout << "the value of b" << b << endl;
        cout << "the value of c" << c << endl;

        cout << "the value of d" << d << endl;
        cout << "the value of e" << e << endl;
    }
};
void employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee soham;
    soham.d=24;
    soham.e=9412;
    soham.setData(1, 2, 3);
    soham.getdata();
}
