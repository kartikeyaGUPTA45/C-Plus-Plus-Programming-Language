#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>dq={10,15,30,5,12};
    auto it=dq.begin();
    it++;
    dq.insert(it,20);
    cout<<"Deque after Insertion of an element :";
    for(auto x:dq)
        cout<<x<<" ";
    return 0;
}
