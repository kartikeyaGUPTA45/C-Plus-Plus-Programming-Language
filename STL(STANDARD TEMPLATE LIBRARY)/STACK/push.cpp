#include<iostream>
#include<stack>
using namespace std;

void show(stack<int> s)
{
    while(!s.empty())
    {
        cout<<'\t'<<s.top();
        s.pop();
    }
    cout<<endl;
}

int main()
{
    stack<int> s;
    s.push(2);
    s.push(13);
    s.push(5);
    s.push(50);
    s.push(33);
    cout<<"The Stack is: ";
    show(s);
    
    return 0;
}
