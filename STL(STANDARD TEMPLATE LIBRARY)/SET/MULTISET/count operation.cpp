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
    cout<<"Occurence of element 45 is: "<<s.count(45);
    
    return 0;
}
