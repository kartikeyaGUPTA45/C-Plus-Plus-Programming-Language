#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    cout<<"Size of Set is:"<<s.size()<<endl;
    s.clear();
    cout<<"Size of Set after clear operation: "<<s.size();
    
        return 0;
}
