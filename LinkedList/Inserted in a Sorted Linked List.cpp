#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first =NULL,*second=NULL,*third=NULL;

void Create(int A[],int n)
{
    struct Node *t,*last;
    int i;
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

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
        
    }
}

void Sorted_Insert(struct Node *p,int x)
{
    struct Node *t,*q=NULL;
    t=new Node;
    t->data=x;
    t->next=NULL;
    
    if(first==NULL)
        first=t;
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
            
        }
    }
}

int main()
{
    int A[]={10,20,30,40,50};
    Create(A,5);
    Sorted_Insert(first,15);
    cout<<"Element of a Linked List:";
    Display(first);

}
