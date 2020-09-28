#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>pq;
    
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<"Traverse the priority_queue :"<<endl;
    while(!q.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
