#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void intcount(void) { counter = 0; }
    void getitem(void);
    void setprice(void);

    void displayprice(void);
};

void shop::setprice(void)
{
    cout << "enter id " << endl;
    cin >> itemid[counter];
    cout << "enter price " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id" << itemid[i] << "is" << itemprice[i] << endl;
    }
}
int main()
{
    shop d;
    d.intcount();
    d.setprice();
    d.setprice();

    d.displayprice();

    return 0;
}