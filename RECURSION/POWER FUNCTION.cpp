// POWER FUNCTION
#include <iostream>

using namespace std;
int power(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    return power(m,n-1)*m;
}
int power1 (int m,int n)
{
    if (n==0)
    {
        return 1;
    }
    if (n%2==0)
    {
        return power1(m*m,n/2);
    }
    return m*power1(m*m,(n-1)/2);
}
int main()
{
    int n,m,r;
    cout<<"IMPLEMENTATION OF POWER FUNCTION USING RECURSION"<<endl;
    cout<<"Enter a base number:";
    cin>>m;
    cout <<"Enter a power number:";
    cin>>n;
    r=power(m,n);
    int k=power1(m,n);
    cout<<r<<endl;
    cout<<k;
    return 0;
}
