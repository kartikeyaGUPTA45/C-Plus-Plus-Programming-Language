#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Queue first element:-"<<q.front()<<endl;
    cout<<"Queue last element :-"<<q.back();
    return 0;
}
