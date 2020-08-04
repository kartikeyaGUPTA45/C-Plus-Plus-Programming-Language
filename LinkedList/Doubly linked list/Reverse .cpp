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
void Reverse(struct Node *p)
{
    struct Node *temp;
    while(p!=NULL)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL)
            first=p;
    }
}
int main()
{
    int A[]={10,20,30,40,50,60};
    Create(A,6);
    Display(first);
    Reverse(first);
    cout<<"\n";
    Display(first);
    return 0;
}
