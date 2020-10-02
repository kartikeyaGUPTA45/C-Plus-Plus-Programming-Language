#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(27);
    cout<<"Elements of Set are:";
    for(int i:s)
        cout<<i<<" ";
    s.erase(5);
    cout<<"\nElements of Set after Erase operation:";
    for(int i:s)
        cout<<i<<" ";
    return 0;
}
