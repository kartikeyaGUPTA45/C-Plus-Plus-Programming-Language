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
    cout<<"\nElements are"<<endl;
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}

void Insert(struct Array *arr,int index,int x)
{
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}
int main()
{
    struct Array arr={{1,2,5,6,9},10,5};
    display(arr);
    Insert(&arr,2,3);
    display(arr);
    return 0;
}
