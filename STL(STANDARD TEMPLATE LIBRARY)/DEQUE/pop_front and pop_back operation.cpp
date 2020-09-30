#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>dq={10,15,30,5,12};
    dq.pop_front();
    cout<<"Deque elements after pop_front operation :";
    for(auto x:dq)
        cout<<x<<" ";
    cout<<endl;
    dq.pop_back();
    cout<<"Deque elements after pop_back operation:";
    for(auto x:dq)
        cout<<x<<" ";
    return 0;
}
