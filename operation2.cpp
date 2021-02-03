#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream sout("operation.txt");
    string name;
    cout<<"enter the name"<<endl;
    cin>>name;
    sout<<"my name is "+name;
   
    sout.close();
    ifstream sin("operation.txt");
    string content;
    sin>>content;
    cout<<"the content of the file is"<<content;
 return 0;
}