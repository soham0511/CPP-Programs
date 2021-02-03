#include<iostream>
#include<map>
#include<string>
using namespace std;    
int main()
{
    map <string,int>marksMap;
    marksMap["Soham"]=98;
    marksMap["Roham"]=45;
    marksMap["Harry"]=56;
     map<string,int>::iterator itr;
for(itr=marksMap.begin();itr!=marksMap.end();itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    cout<<endl;
  
   
      marksMap.insert(itr,pair<string,int>({"KK",56}));
       marksMap.insert(itr,pair<string,int>({"Kobuke",78}));
    for(itr=marksMap.begin();itr!=marksMap.end();itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
cout<<"the max size is"<<marksMap.max_size()<<endl;
    return 0;
}