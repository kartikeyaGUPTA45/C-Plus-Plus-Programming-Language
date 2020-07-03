// FACTORIAL OF 'N'
#include <iostream>

using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return fact(n-1)*n;
}
int main()
{
    int n,r;
    cout<<"IMPLEMENTATION OF FACTORIAL OF 'N' USING RECURSION"<<endl;
    cout<<"Enter a number:";
    cin>>n;
    r=fact(n);
    cout<<r;
    return 0;
}
