#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    
}*Head;

void Create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    Head=new Node;
    Head->data=A[0];
    Head->next=Head;
    last=Head;
    for(i=1;i<n;i++)
    {
        t= new Node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

int Length(struct Node *p)
{
    int count=0;
    do
    {
        count++;
        p=p->next;

    }while(p!=Head);

    return count;
}

void display(struct Node *h)
{
    do
    {
        cout<<h->data<<" ";
        h=h->next;
        
    }while(h!=Head);
    
    cout<<"\n";
}

int Delete (struct Node *p,int index)
{
    struct Node *q;
    int i,x;
    if(index<0 ||index>Length(Head))
        return -1;
    if(index==1)
    {
        while(p->next!=Head)p=p->next;
        x=Head->data;
        if(Head==p)
        {
            delete(Head);
            Head=NULL;
        }
        else
        {
            p->next=Head->next;
            delete(Head);
            Head=p->next;
        }
    }
    else
    {
        for(i=0;i<index-2;i++)
            p=p->next;
        q=p->next;
        p->next=q->next;
        x=q->data;
        delete(q);
    }
    return x;
    }
int main()
{
    int A[]={2,3,4,5,6};
    Create(A,5);
    display(Head);
    cout<<"\nLength of Circular Linked List before deletion:"<<Length(Head)<<endl;
    Delete(Head,5);
    display(Head);
    cout<<"\nLength of Circular Linked List after deletion:"<<Length(Head);
    return 0;
}
