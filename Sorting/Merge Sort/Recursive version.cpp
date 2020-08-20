#include <iostream>
using namespace std;

void Merge(int a[],int l,int mid,int h)
{
  int i=l,j=mid+1,k=l;
  int b[100];

  while(i<=mid && j<=h)
  {
      if(a[i]<a[j])
          b[k++]=a[i++];
      else
          b[k++]=a[j++];
  }
  for(;i<=mid;i++)
    b[k++]=a[i];
  for(;j<=h;j++)
    b[k++]=a[j];

  for(i=l;i<=h;i++)
    a[i]=b[i];
}

void MergeSort(int a[],int l,int h)
{
 int mid;
 if(l<h)
 {
 mid=(l+h)/2;
 MergeSort(a,l,mid);
 MergeSort(a,mid+1,h);
 Merge(a,l,mid,h);

 }
}

int main()
{
  int n;
  cout<<"Enter the size of an array"<<endl;
  cin>>n;
  int a[n];
  cout<<"Enter the array elements"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  MergeSort(a,0,n-1);
  cout<<"Array after sorting:"<<endl;
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
  return 0;
}
