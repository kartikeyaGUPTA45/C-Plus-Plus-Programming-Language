#include<iostream>
using namespace std;
int partition(int a[],int p,int r)
{
 int pivot=a[r];
 int i= p-1;
 for(int j=p;j<=r-1;j++)
 {
 if(a[j]<pivot)
 {
 i=i+1; 
 swap(a[i],a[j]);
 }
 }
 swap(a[i+1],a[r]);
 return (i+1);
}
void quickSort(int a[],int p,int r)
{
 if(p<r)
 {
 int q=partition(a,p,r);
 quickSort(a,p,q-1);
 quickSort(a,q+1,r);

 }
} 
int main()
{
 int n;
 cout<<"Enter the size of an Array:";
 cin>>n;
 int a[n];
 cout<<"Enter the array elements"<<endl;
 for(int i=0;i<n;i++)
 cin>>a[i];
 quickSort(a,0,n-1);
 cout<<"Array after Sorting"<<endl;
 for(int i=0;i<n;i++)
 cout<<a[i]<<" ";
 return 0;
}
