#include<iostream>
using namespace std;
int main()
{
    int *p= new int [5];
    int *q=new int[10];
    for (int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    cout<<"p array"<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;;
    }
    for(int i=0;i<5;i++)
    {
        q[i]=p[i];
    }
    cout<<"q array"<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<q[i]<<endl;;
    }
    delete []p;
    p=q;
    q=NULL;
    return 0;
}
