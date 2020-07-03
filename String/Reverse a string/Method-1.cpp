#include<iostream>
using namespace std;
int main()
{
    char A[]="Kartikeya";
    char B[10]; 
    cout<<"Given string:"<<A<<endl;
    int i,j;
    for(i=0;A[i]!='\0';i++)
    {}
    i=i-1;
    for(j=0;i>=0;i--,j++)
    {
        B[j]=A[i];
    }
    cout<<"Reverse String:"<<B;
    return 0;
}
