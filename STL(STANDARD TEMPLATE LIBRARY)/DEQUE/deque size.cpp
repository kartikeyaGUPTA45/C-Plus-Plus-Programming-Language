#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>dq={10,15,30,5,12};
    dq.push_front(2);
    dq.push_back(50);
    cout<<"Size of Deque is:"<<dq.size();
    return 0;
}
