#include<iostream>
using namespace std;

int linear_Search(int A[],int k,int n,int x)
{
    if(A[k]==x)
        return k;
    else if(n<k)
        return -1;
    else
        return linear_Search(A, k + 1,  n, x); 
} 
  
 
int main() 
{ 
    int A[10] , i,n,search,x; 
    cout<<"Enter size of an array"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"\nEnter the element to be search:";
    cin>>x;
    search = linear_Search(A, 0, n - 1, x); 
    if (search == -1) 
    cout<<"Element not found"; 
    else
        cout << "Element found at index: "<<search; 
    return 0; 
} 
        
