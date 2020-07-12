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


int Delete(struct Node *p, int index)
{
    int i,x=-1,count=0;
    struct Node *q,*s;
    s=p;
    while(s!=NULL)
    {
        count++;
        s=s->next;
    }
    q=NULL;
    
    if(index<1 || index>count)
        return -1;
    if (index==1)
    {
        q=first;
        x=first->data;
        first=first->next;
        free(q);
        return x;
    }
    else
    {
        for(i=0;i<index-1;i++)
        {
            q=p;
            p=p->next;
        }
        
        q->next=p->next;
        x=p->data;
        free(p);
        return x;
    }
}


int main()
{
    int A[]={1,2,3,4,5,6,7,8,9,10};
    int k;
    Create(A,10);
    Display(first);
    cout<<"\n"<<Delete((first),12)<<endl;
    Display(first);
    return 0;
}
