#include<iostream>
using namespace std;

/*int partition(int A[],int l,int h)
{
    int pivot=A[l];
    int i=l,j=h;
    
    do
    {
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);
        
        if(i<j)swap(A[i],A[j]);
    }while(i<j);
    
    swap(A[l],A[j]);
    return j;
}

void QuickSort(int A[],int l,int h)
{
    int j;
    
    if(l<h)
    {
        j=partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}


int main()
{
    int A[]={11,13,7,12,16,9,24,5,10,3,INT32_MAX},n=11,i;
    
    QuickSort(A,0,n-1);
    
    for(i=0;i<n-1;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}*/


void BubbleSort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
                swap(A[j],A[j+1]);
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of Array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the Array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    BubbleSort(a,n);
    cout<<"After Bubble Sorting:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        
    return 0;
    
}
