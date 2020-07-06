// TAYLOR SERIES HORNER'S RULE
#include <iostream>

using namespace std;
double taylor_horner(int x,int n)
{
    static double s;
    if (n==0)
    {
        return s;
    }
    s=1+x*s/n;
    return taylor_horner(x,n-1);
}
int main()
{
    cout<<"IMPLEMENTATION OF TAYLOR SERIES HORNER'S RULE"<<endl;
    cout<<taylor_horner(2,10);
    return 0;
}
