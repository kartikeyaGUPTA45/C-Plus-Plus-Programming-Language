#include<iostream>
using namespace std;

void count(int a[],int n,int max)
{
    int c[max+1]={0};
    for(int i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    int i=0,j=0;
    while(i<max+1)
    {
        if(c[i]>0)
        {
            a[j++]=i;
            c[i]--;
        }
        else
            i++;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of an Array:"<<endl;
    cin>>n;
    int a[n];
    int max=0;
    cout<<"Enter the Array elements one by one:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    count(a,n,max);
    cout<<"After Sorting:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
