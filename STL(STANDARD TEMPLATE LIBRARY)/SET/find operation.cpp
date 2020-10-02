#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    auto it=s.find(10);
    if(it==s.end())
        cout<<"Element Not Found";
    else
        cout<<"Element Found";
    return 0;
}
