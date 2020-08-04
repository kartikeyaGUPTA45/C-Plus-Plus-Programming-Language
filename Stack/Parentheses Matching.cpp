#include<iostream>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
}*top=NULL;

void push(char x)
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
    char x=-1;
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

int isBalanced(char *exp)
{
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i]==')')
        {
            if(top==NULL)
                return 0;
            pop();
        }
    }
    if(top==NULL)
        return 1;
    else
        return 0;
}

int main()
{
    char *exp="((a+b)*(c-d)))";
    cout<<"Is the parantheses balanced?"<<isBalanced(exp);
    
    return 0;
}
