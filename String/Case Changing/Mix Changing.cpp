#include<iostream>
using namespace std;
int main()
{
    char A[]="WelCOme";
    cout<<"String :"<<A<<endl;
    for (int i=0;A[i]!='\0';i++)
    {
        if(A[i]>=65 && A[i]<=90)
            A[i]=A[i]+32;
        else
            A[i]=A[i]-32;
    }
    cout<<"After converting  lowercase into uppercase or vice-versa :"<<A;
    return 0;
}
