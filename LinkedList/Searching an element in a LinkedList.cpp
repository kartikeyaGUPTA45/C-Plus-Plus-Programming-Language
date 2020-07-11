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


struct Node *Search(struct Node *p,int key)
{
    struct Node *q;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            cout<<"Element Found Successfully";
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

int main()
{
    int A[]={3,5,7,10,25,32,2,8};
    struct Node *temp;
    Create(A,8);
    
    temp=Search(first,8);
    cout<<temp->data;
    return 0;
    
}
