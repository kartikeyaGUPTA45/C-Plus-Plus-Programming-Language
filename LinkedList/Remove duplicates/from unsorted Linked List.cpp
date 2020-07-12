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

void RemoveDuplicate(struct Node *p)
{
    struct Node *ptr1, *ptr2,*dup;
    ptr1=first;
    while(ptr1!=NULL && ptr1->next !=NULL)
    {
        ptr2=ptr1;
        while(ptr2->next!=NULL)
        {
            if(ptr1->data==ptr2->next->data)
            {
                dup=ptr2->next;
                ptr2->next=ptr2->next->next;
                delete(dup);
            }
            else
                ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
}

int main()
{
    int A[]={10,20,20,15,15,92,65,23,40,40,50,50,1,1,12,12,50,50,60};
    Create(A,19);
    
    RemoveDuplicate(first);
    Display(first);
    
    return 0;
}
