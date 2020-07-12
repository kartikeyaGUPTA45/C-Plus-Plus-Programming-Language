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

int Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int isSorted(struct Node *p)
{
    int x=first->data;
    while (p!=NULL)
    {
        if(p->data<x)
            return 0;
        x=p->data;
        p=p->next;
    }
    return 1;
}

int main()
{
    int A[]={1,2,3,4,5,6,7,8,9,10};
    int k;
    Create(A,10);
    Display(first);
    cout<<"\n Is the Linked List Sorted 0:Not Sorted , 1: Sorted -> "<<isSorted(first)<<endl;
    
    return 0;
}
