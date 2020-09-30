#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>dq={10,20,30};
    dq.push_front(5);
    dq.push_back(50);
    cout<<"Deque Front element is: "<<dq.front()<<endl;
    cout<<"Deque Back element is: "<<dq.back();
    return 0;
}
