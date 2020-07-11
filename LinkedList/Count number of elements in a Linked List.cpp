#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first =NULL;

void Create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}


int Count(struct Node *p)
{
    int count=0;
    while(p)
    {
        count++;
        p=p->next;
    }
    return count;
}

int main()
{
    int A[]={3,5,7,10,25,32,2,8};
    
    Create(A,8);
    
    cout<<"Number of Elements in a LinkedList:"<<Count(first);
    return 0;
    
}
