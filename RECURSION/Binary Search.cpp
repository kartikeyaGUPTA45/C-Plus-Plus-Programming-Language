#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 

int binary_Search(int A[], int k, int n, int x) 
{ 
    if (n >= k) { 
        int middle = (k + n) / 2; 
        //6 7 8 9 10 , x=5
        if (A[middle] == x) 
            return middle; 
 
        else if (A[middle] > x) 
            return binary_Search(A, k, middle - 1, x); 
        else if(A[middle]<x)
            return binary_Search(A, middle + 1, n, x); 
    } 
    else
        return -1;
} 
int main() 
{ 
    int A[10] , i,n,search,x; 
    cout<<"Enter size of an array"<<endl;
    cin>>n;
    cout<<"Enter the elements in sorted order:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"\nEnter the element to be search:";
    cin>>x;
    search = binary_Search(A, 0, n - 1, x); 
    if (search == -1) 
    cout<<"Element not found"; 
    else
        cout << "Element found at index: "<<search; 
    return 0; 
} 
