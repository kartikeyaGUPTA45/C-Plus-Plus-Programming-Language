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

int main()
{
    int A[]={2,3,4,5,6};
    Create(A,5);
    display(Head);
    cout<<"\nLength of the Circular Linked List:"<<Length(Head);
    return 0;
}
