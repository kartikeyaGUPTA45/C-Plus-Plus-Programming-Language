#include<iostream>
using namespace std;
int main()
{
    char A[]="welcome";
    cout<<"Lowercase:"<<A<<endl;
    for (int i=0;A[i]!='\0';i++)
    {
        A[i]=A[i]-32;
    }
    cout<<"After converting it into uppercase:"<<A;
    return 0;
}
