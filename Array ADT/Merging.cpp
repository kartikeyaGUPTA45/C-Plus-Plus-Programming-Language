#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int A[]={2,5,6};
    int B[]={4,7,8};
    int C[6];
    int i,j,k,d;
    i=j=k=0;
    while(i<3 && j<3)
    {
        if(A[i]<B[j])
            C[k++]=A[i++];
        else
            C[k++]=B[j++];
    }
    for(;i<3;i++)
        C[k++]=A[i];
    for(;j<3;j++)
        C[k++]=B[j];
    cout<<"Array A's elements are:"<<endl;
    for(i=0;i<3;i++)
        cout<<A[i]<<" ";
    cout<<"\nArray B's elements are:"<<endl;
    for(i=0;i<3;i++)
        cout<<B[i]<<" ";
    cout<<"\nAfter Merging"<<endl;
    for(d=0;d<k;d++)
    {
        cout<<C[d]<<" ";
    }
    
    return 0;
}
