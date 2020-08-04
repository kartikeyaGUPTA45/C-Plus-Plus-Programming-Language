#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x)
{
    struct Node *t;
    t=new Node;
    if(t==NULL)
        cout<<"Stack is full";
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
    
}

int pop()
{
    struct Node *t;
    int x=-1;
    if(top==NULL)
        cout<<"Stack is Empty ";
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
  }
  return x;
}

void display()
{
    struct Node *p;
    p=top;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\n";
}


int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    
    display();
    
    cout<<pop()<<endl;
    cout<<"Stack elements after pop operation"<<endl;
    display();
    
    return 0;
}
