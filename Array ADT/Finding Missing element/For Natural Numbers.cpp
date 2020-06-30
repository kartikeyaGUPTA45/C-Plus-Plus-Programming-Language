#include<iostream>
using namespace std;
int main()
{
    int A[20];
    int n;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    cout<<"Enter the Numbers:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int S=A[n-1];
    int k=S*(S+1)/2;
    int sum=0;
    for( int i=0;i<n;i++)
        sum=sum+A[i];
    cout<<"The missing element is:"<<k-sum;
    return 0;
}
    
