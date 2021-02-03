#include<iostream>
#include<vector>
using namespace std;
template <class t>
void display(vector<t> &v)
{
    cout<<"displaying this vector"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;

}
int main()
{
    vector<int> vec1;
       display(vec1);
    // int ele,size;
    // cout<<"enter the size"<<endl;
    // cin>>size;
    // for(int i=0;i<size;i++)
    // {
    // cout<<"enter element to add to vector"<<endl;
    // cin>>ele;
    // vec1.push_back(ele);
    // }//vec1.pop_back();
    // display(vec1);
//     vector<int>::iterator iter=vec1.begin();
//     vec1.insert(iter+2,566);
//    vec1.insert(iter+2,5,566);
//     display(vec1);
vector<char> vec2(4);
 display(vec2);
vector<char> vec3(vec2);
 display(vec3);
vector<int> vec4(6,3);
 display(vec4);
    return 0;
}