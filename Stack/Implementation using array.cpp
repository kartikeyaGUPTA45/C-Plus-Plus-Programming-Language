#include<iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *S;
};

void Create(struct stack *st)
{
    cout<<"Enter Size:";
    cin>>(st->size);
    st->top=-1;
    st->S=new int [st->size];
}
void display(struct stack st)
{
    for(int i=st.top;i>=0;i--)
        cout<<st.S[i]<<" ";
    cout<<"\n";
}

bool isEmpty(struct stack st)
{
    if(st.top==-1)
        return true;
    return false;
}

bool isFull(struct stack st)
{
    if(st.top==st.size-1)
        return true;
    return false;
}

int stackTop(struct stack st)
{
    if(!isEmpty(st))
        return st.S[st.top];
    return -1;
}
void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
        cout<<"Stack is full";
    else
    {
        st->top++;
        st->S[st->top]=x;
    }
}

int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
        cout<<"Stack is Underflow";
    else
    {
        x=st->S[st->top];
        st->top--;
    }
    return x;
}

int peek(struct stack st,int index)
{
    int x=-1;
    if(st.top-index+1<0)
        cout<<"Invalid Index";
    x=st.S[st.top-index+1];
    
    return x;
}

int main()
{
    struct stack st;
    Create(&st);
    
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    
    cout<<peek(st,2);
    cout<<"\n";
    display(st);
    pop(&st);
    cout<<"After poping an element from a Stack"<<endl;
    display(st);
    return 0;
}
