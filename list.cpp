#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it=lst.begin(); it!=lst.end();  it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
int main()
{
    list<int> list1;
    list<int> list2(3);
    list1.push_back(81);
    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(6);
    list1.push_back(1);
    display(list1);
   list1.reverse();
     display(list1);
// list1.sort();
// display(list1);






    // list1.remove(4);
    // display(list1);
//     list1.pop_back();
//     display(list1);
//     list1.pop_front();
//     display(list1);
//    list<int> ::iterator iter;
//    iter=list2.begin();
//    *iter=23;
//    iter++;
//    *iter=2;
//    iter++;
//    *iter=273;
//    display(list2);
//    list1.merge(list2);
//    display(list1);

}