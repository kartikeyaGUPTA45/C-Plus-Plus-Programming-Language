#include<iostream>
#include<cmath>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    
}*first=NULL;

void Create(int A[],int n)
{
    int i;
    struct Node *last,*t;
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

int middleNode1(struct Node* p)
{
    int length = 0;
    while (p){
        length++;
        p = p->next;
    }
 
    int index = (int)ceil(length/2.0);
    struct Node* q = first;
    for (int i=0; i<index-1; i++){
        q = q->next;
    }
    return q->data;
}

int main()
{
    int A[]={10,20,30,40,50};
    Create(A,5);
    display(first);
    cout<<"\nMiddle Element:"<<middleNode1(first);
    return 0;
}
