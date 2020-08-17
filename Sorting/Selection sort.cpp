#include<iostream>
using namespace std;

void selection_Sort(int a[],int n)
{

    int i,j,k;
    for(int i=0;i<n;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
                k=j;
        }
        swap(a[i],a[k]);
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
    selection_Sort(a,n);
    cout<<"After Sorting:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
