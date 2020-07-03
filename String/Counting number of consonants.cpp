#include<iostream>
using namespace std;
int main()
{
    char A[]="How are you?";
    int v_count=0,c_count=0;
    cout<<"String :"<<A<<endl;
    for (int i=0;A[i]!='\0';i++)
    {
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
            v_count++;
        else if((A[i]>=65 && A[i]<=90)||(A[i]>=97 && A[i]<=122))
            c_count++;
    }
    cout<<"Number of Consonants :"<<c_count;
    return 0;
}
