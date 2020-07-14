#include<iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

void Create1(int A[],int n)
{
    struct Node *last,*t;
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

void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void Create2(int B[],int m)
{
    struct Node *last,*t;
    second=new Node;
    second->data=B[0];
    second->next=NULL;
    last=second;
    for(int i=1;i<m;i++)
    {
        t=new Node;
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}


void Concatenation(struct Node *p,struct Node *q)
{
    third=first;
    if(p!=NULL && q!=NULL)
    {
        if (p->next == NULL)
            p->next = q;
        else
            Concatenation(p->next,q);
    }
}

int main()
{
    int A[]={10,20,40,50,60};
    int B[]={15,18,25,30,55};
    Create1(A,5);
    Create2(B,5);
    cout<<"First Linked List: ";
    display(first);
    cout<<"\nSecond Linked List: ";
    display(second);
    Concatenation(first,second);
    cout<<"\n After Concatenation of Linked List: ";;
    display(third);
    return 0;
}
