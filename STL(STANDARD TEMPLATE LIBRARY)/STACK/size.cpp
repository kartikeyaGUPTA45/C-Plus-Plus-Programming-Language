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
    cout<<"Size of Stack is:"<<s.size();
    
    return 0;
}
