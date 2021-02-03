#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    // ofstream out;
    // out.open("openeof.txt");
    // out<<"this is me ";
    // out<<"this is me also";
    // out.close();
    ifstream in;
    string st;
    in.open("openeof.txt");
    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;
}