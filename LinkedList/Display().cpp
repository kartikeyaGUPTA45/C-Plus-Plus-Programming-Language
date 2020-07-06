#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first=NULL;

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


int main()
{
    int A[]={3,5,7,10,25,8,32,2};
    Create(A,8);
    
    cout<<"Element in a LinkedList are:";
    Display(first);
    
    
    return 0;
}
