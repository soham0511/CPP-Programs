#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;


int main()
{
    int arr[]={1,7,4,8,2};
   // sort(arr,arr+5);
    sort(arr,arr+5,greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}