#include<iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    cout<<"\n Elements are\n";
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}

void Reverse(struct Array *arr)
{
    int *B;
    int i,j;
    B=new int[10];
    for(i=arr->length-1,j=0;i>=0;i--,j++)
    {
        B[j]=arr->A[i];
    }
    for (i=0;i<arr->length;i++)
    {
        arr->A[i]=B[i];
    }
}

int main()
{
    struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};
    Display(arr);
    Reverse(&arr);
    Display(arr);
    return 0;
}
