#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int A[]={2,5,6,15};
    int B[]={2,7,8,12};
    int C[10];
    int i,j,k,d;
    i=j=k=0;
    while(i<5 && j<4)
    {
        if(A[i]<B[j])
            i++;
        else if(A[i]>B[j])
            C[k++]=B[j++];
        else if (A[i]==B[j])
        {
            i++;
            j++;
        }
    }
    for(;j<4;j++)
        C[k++]=B[j++];
    cout<<"Array A's elements are:"<<endl;
    for(i=0;i<4;i++)
        cout<<A[i]<<" ";
    cout<<"\nArray B's elements are:"<<endl;
    for(i=0;i<4;i++)
        cout<<B[i]<<" ";
    cout<<"\n Difference of B-A"<<endl;
    for(d=0;d<k;d++)
    {
        cout<<C[d]<<" ";
    }
    
    return 0;
}
