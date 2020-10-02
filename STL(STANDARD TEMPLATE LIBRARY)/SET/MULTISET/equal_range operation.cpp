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
    auto it=s.equal_range(45);
    cout<<"Output of equal_range operation :"<<endl;
    cout<<(*it.first)<<" "<<(*it.second);
    return 0;
}
