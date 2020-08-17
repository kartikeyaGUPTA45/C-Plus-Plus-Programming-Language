#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s1;
    stack<int> s2;
    s1.push(12);
    s1.push(23);
    s1.push(1);
    s1.push(48);
    s1.push(236);
    
    s2.push(2);
    s2.push(123);
    s2.push(10);
    s2.push(84);
    s2.push(56);
    
    s1.swap(s2);
    
    cout<<"Stack 1 is:";
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
    cout<<"Stack 2 is:";
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    
    
    return 0;
}
