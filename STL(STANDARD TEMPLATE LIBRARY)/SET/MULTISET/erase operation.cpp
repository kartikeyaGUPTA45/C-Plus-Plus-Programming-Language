#include<iostream>
#include<set>
using namespace std;

int main()
{
    multiset<int>s;
    s.insert(55);
    s.insert(10);
    s.insert(45);
    s.insert(45);
    cout<<"Elements of Multiset are:";
    for(auto i:s)
        cout<<i<<" ";
    s.erase(45);
    cout<<"\nElements of Multiset after erase operation are:";
    for(auto i:s)
        cout<<i<<" ";
    
    return 0;
}
