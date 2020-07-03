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
int ncr(int n,int r)    //Method-1
{
    int num,dem;
    num=fact(n);
    dem=fact(r)*fact(n-r);
    
    return num/dem;
}

int NCR(int n,int r)     //Method-2
{
    if(n==r||r==0)
    {
        return 1;
    }
    return NCR(n-1,r-1)+NCR(n-1,r);
}

int main()
{
    int n,r;
    cout<<"IMPLEMENTATION OF COMBINATION FORMULA USING RECURSION"<<endl;
    cout<<NCR(5,3)<<endl;
    cout<<ncr(5,3);
    return 0;
}
