#include<iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
    
};
void display(struct Array arr)
{
    int i;
    cout<<"Elements are"<<endl;
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
int main()
{
    struct Array arr={{1,2,5,6,9},10,5};
    display(arr);
}
