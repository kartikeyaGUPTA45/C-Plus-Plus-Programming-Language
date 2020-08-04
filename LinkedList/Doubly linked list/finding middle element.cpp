#include<iostream>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;

void Create(int A[],int n)
{
    struct Node *t,*last;
    int i;
    first=new Node;
    first->data=A[0];
    first->prev=first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
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

int length(struct Node *p)
{
    int len=0;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}
int find_Middle(struct Node *p)
{
    int k=length(p)/2;
    int i=0;
    while(i!=k)
    {
        p=p->next;
        i++;
    }
    return p->data;
}
int main()
{
    int A[]={10,20,30,40,50,60,70};
    Create(A,7);
    Display(first);
    cout<<"\nMiddle Element of a Linked List is:"<<find_Middle(first);
    return 0;
}
