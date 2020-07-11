#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;


void Create(int A[],int n)
{
    struct Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int Max(struct Node *p)
{
    int max;
    max=first->data;
    while(p!=NULL)
    {
        if(max<p->data)
            max=p->data;
        p=p->next;
    }
    
    return max;
}


int main()
{
    int A[]={1,2,3,4,5,45,6,7,8,9,10};
    int k;
    Create(A,10);
    k=Max(first);
    cout<<"Maximum Element in a Linkedlist is:"<<k;
    return 0;
}
