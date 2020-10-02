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
    auto it1=s.lower_bound(45);
    auto it2=s.upper_bound(45);
    cout<<"lower_bound is:"<<(*it1)<<endl;
    cout<<"upper_bound is:"<<(*it2);
    return 0;
}
