#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(12);
    s.push(23);
    s.push(1);
    s.push(48);
    s.push(236);
    
    s.pop();
    s.pop();
    
    while(!s.empty())
    {
        cout<<" "<<s.top();
        s.pop();
    }
}
