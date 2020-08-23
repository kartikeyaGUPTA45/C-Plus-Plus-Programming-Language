#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of 2D array:";
    cin>>n;
    int a[n][n];
    cout<<"Enter the element of a 2D array:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Symmetric Matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
