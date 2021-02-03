#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str="soham srimany";string str2;
    // ofstream  ("operation.txt");
    // out<<str;
ifstream  in("operation.txt");
//in>>str2;
getline(in,str2);
cout<<str2;
getline(in,str2);
cout<<str2;
    return 0;
}