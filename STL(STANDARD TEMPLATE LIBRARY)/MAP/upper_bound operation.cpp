#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int,greater<int>>m; 
    m.insert({10,200});
    m[5]=100;
    m.insert({3,300});
    auto it=m.upper_bound(5);
    if(it!=m.end())
        cout<<(*it).first<<" "<<(*it).second;
    else
        cout<<" No equal or greater value";
    return 0;
}
