// STATIC VARIABLES IN RECIRSION
#include <iostream>

using namespace std;

int function(int n)
{
    static int x=0;   
    if (n>0)
    {
        x++;
        return function(n-1)+x;
    }
    return 0;
}
int main()
{
    int n,r;
    cout<<"IMPLEMENTATION OF  RECTATIC VARIABLES IN RECURSION"<<endl;
    cout<<"Enter a number:";
    cin>>n;
    r=function(n);
    cout<<r;
    return 0;
}
