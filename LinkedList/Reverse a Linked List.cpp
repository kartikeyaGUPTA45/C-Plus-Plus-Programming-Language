#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*thrid=NULL;

void Create(int A[], int n)
{
    int i;
    struct Node *t, *last;
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

void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void Reverse(struct Node *p)
{
    struct Node *r=NULL,*q=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

int main()
{
    int A[]={10,20,30,40,50};
    Create(A,5);
    display(first);
    Reverse(first);
    cout<<"\nLinked List after Reversing"<<endl;
    display(first);
    return 0;
}
