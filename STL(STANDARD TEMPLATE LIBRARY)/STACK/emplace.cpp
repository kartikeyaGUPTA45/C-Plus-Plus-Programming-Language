#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s1;
    stack<int> s2;
    s1.emplace(12);
    s1.emplace(23);
    s1.emplace(1);
    s1.emplace(48);
    s1.emplace(236);
    
    
    
    cout<<"Stack 1 is:";
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    
    
    
    
    return 0;
}
