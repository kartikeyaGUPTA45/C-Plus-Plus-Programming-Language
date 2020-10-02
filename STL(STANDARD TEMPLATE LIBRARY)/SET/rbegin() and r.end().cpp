#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int,greater<int>>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    cout<<"Elements in Set are:";
    for(auto it=s.rbegin();it!=s.rend();it++)
        cout<<(*it)<<" ";
    return 0;
}
