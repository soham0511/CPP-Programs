#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int marks[]={12,45,34,89};
    int i=0;
    // do
    // {
    //     cout<<"marks of "<<i+1<<"student is"<<marks[i]<<endl;
    //     i++;
    // } while (i<4);
    int* p=marks;
    
       while(i<4)
       {
            cout<<"marks of "<<i+1<<"student is"<<(*(p++))<<endl;
        i++;
        
       }
      
    return 0;
}