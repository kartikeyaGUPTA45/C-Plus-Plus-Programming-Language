#include<iostream>
using namespace std;

void insertion_Sort(int a[],int n)
{
    int j;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        int x=a[i];
        while(j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of an Array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the Array element:"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    insertion_Sort(a,n);
    cout<<"After Sorting:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
