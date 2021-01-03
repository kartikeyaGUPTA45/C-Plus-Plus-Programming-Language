#include<bits/stdc++.h>
#include<vector>
using namespace std;

int st[100],n=5,top1=-1,top2=5;

void push1 (int val)
{
    if(top1 <top2-1){
        top1++;
        st[top1]=val;
    }
    else{
        cout<<"Stack Overflow"<<endl;
    }
}

void push2(int val)
{
    if(top1 <top2-1){
        top2--;
        st[top2]=val;
    }
    else{
        cout<<"Stack Overflow"<<endl;
    }
}


void pop1(){
    if(top1<=-1)
        cout<<"Stack Underflow"<<endl;
    else{
        cout<<"The popped element is "<<st[top1]<<endl;
        top1--;
    }
}

void pop2(){
    if(top2<5){
        cout<<"The popped element is "<<st[top2]<<endl;
        top2--;
    }
    else
        cout<<"Stack Underflow"<<endl;
}

void display1(){
    if(top1>=0){
        cout<<"Stack 1 elements are:"<<endl;
        for(int i=top1;i>=0;i--)
            cout<<st[i]<<" ";
        cout<<endl;
    }
    else
        cout<<"Stack 1 is empty"<<endl;
}


void display2(){
    if(top2!=5){
        cout<<"Stack 2 elements are:"<<endl;
        for(int i=top2;i<n;i++)
            cout<<st[i]<<" ";
        cout<<endl;
    }
    else
        cout<<"Stack2 is empty"<<endl;
}

int main(){
    int ch, val;
    cout<<"1) Push in stack 1"<<endl;
    cout<<"2) Push in stack 2"<<endl;
    cout<<"3) Pop in stack 1"<<endl;
    cout<<"4) Pop in stack 2"<<endl;
    cout<<"5) Display 1"<<endl;
    cout<<"6) Display 2"<<endl;
    cout<<"7) Exit"<<endl;
    
    do{
        cout<<"Enter choice:"<<endl;
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"Enter the value to be pushed in the Stack 1:"<<endl;
                cin>>val;
                push1(val);
                break;
            }
            
            case 2:{
                cout<<"Enter the value to be pushed in the Stack 2:"<<endl;
                cin>>val;
                push2(val);
                break;
            }
            case 3:{
                pop1();
                break;
            }
            case 4:{
                pop2();
                break;
            }
            case 5:{
                display1();
                break;
            }
            case 6:{
                display2();
                break;
            }
            case 7:{
                cout<<"Exit"<<endl;
                break;
            }
            default:{
                cout<<"Invalid Choice"<<endl;
            }
        }
    }while(ch!=7);
    
    return 0;
}
