#include<iostream>
using namespace std;
void funB(int n);
void funA(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        funB(n-1);
    }
}
void funB(int n)
{
    if(n>1)
    {
        cout<<n<<endl;
        funA(n/2);
    }
}

int main()
{
    funA(20);
    return 0;
}
