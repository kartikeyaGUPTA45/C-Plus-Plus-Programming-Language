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


void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void Insert_at_Last(int x)
{
    struct Node *t,*last;
    t=new Node;
    t->data=x;
    t->next=NULL;
    last=first;
    if(first==NULL)
    {
        first=last=t;
    }
    else
    {
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last->next=t;
        last=t;
    }
}
int main()
{
    int A[]={3,5,7,10,25,32,2,8};
   
    Create(A,8);
    cout<<"Elements of a LinkedList are:";
    display(first);
    Insert_at_Last(27);
    cout<<"\nElements of a LinkedList after inserting an element at last:";
    display(first);    
    return 0;
    
}
