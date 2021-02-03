#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    public:
    void read();
    void chkbin();
    void ones();
    void display();
    };
    void binary :: read(void)
    {
        cout<<"enter a binary number"<<endl;
        cin>>s;
    }
    void binary:: chkbin(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"incorrect format"<<endl;
                exit(0);
            }
        }
        

    }
    void binary:: ones(void)
    {
         chkbin();    
        for (int i = 0; i < s.length(); i++)
        {
            if(s.at(i)=='0')
            {
                s.at(i)='1';
            }
            else if(s.at(i)=='1')
            {
                s.at(i)='0';
            }
        }
    }
    void binary::display(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            cout<<s.at(i);
        }
        cout<<endl;
    }
int main()
{
    binary b;
    b.read();
   
    b.display();
    b.ones();
    b.display();
    return 0;
}