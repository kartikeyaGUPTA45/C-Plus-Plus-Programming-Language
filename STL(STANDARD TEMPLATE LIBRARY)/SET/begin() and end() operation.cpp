#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int,greater<int>>s;
    //Set in C++ is used to store sorted data.
    s.insert(10);
    s.insert(5);
    s.insert(20);
    cout<<"Elements in Set are:";
    for(auto it=s.begin();it!=s.end();it++)
        cout<<(*it)<<" ";
    return 0;
}
