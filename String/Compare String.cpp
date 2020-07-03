#include<iostream>
using namespace std;
int main()
{
    char A[]="Painter";
    char B[]="Painting"; 
    cout<<"Given string1 :"<<A<<endl;
    cout<<"Given String2 :"<<B<<endl;
    int i,j;
    for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++)
    {
        if (A[i]!=B[j])
            break;
    }
   if(A[i]>B[j])
        cout<<"String 1 is bigger"<<endl;
    else if (A[i]<B[j])
        cout<<"String 2 is bigger"<<endl;
    else
        cout<<"Strings are equal";
    return 0;
}
