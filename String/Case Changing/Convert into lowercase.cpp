#include<iostream>
using namespace std;
int main()
{
    char A[]="WELCOME";
    cout<<"Uppercase:"<<A<<endl;
    for (int i=0;A[i]!='\0';i++)
    {
        A[i]=A[i]+32;
    }
    cout<<"After converting it into lowercase:"<<A;
    return 0;
}
