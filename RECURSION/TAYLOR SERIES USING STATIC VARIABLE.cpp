// TAYLOR SERIES USING STATIC VARIABLES
#include <iostream>

using namespace std;
double taylor(int x,int n)
{
    static double p=1,f=1;
    double r;
    if (n==0)
    {
        return 1;
    }
    r=taylor(x,n-1);
    p=p*x;
    f=f*n;
}
int main()
{
    cout<<"IMPLEMENTATION OF TAYLOR SERIES"<<endl;
    cout<<taylor(4,15);
    return 0;
}
