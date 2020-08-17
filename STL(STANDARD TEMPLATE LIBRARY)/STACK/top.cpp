#include<iostream>
#include<stack>
using namespace std;



int main()
{
    stack<int> s;
    s.push(2);
    s.push(13);
    s.push(5);
    s.push(50);
    s.push(33);
    cout<<"The Top element of Stack: "<<s.top();
    
    return 0;
}
