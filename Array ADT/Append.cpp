#include<iostream>
using namespace std;
struct Array
{
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
void Append(struct Array *arr ,int x)
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length++]=x;
    }
}

int main()
{
    struct Array arr1={{2,3,4,5,6},10,5};
    Display(arr1);
    Append(&arr1,7);
    Display(arr1);
}
