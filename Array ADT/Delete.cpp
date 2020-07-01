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

int Delete(struct Array *arr,int index)
{
    int x=0;
    int i;
    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
}
int main()
{
    struct Array arr={{1,2,5,6,9},10,5};
    display(arr);
    cout<<"\nDeleted element:"<<Delete(&arr,2);
    display(arr);
    return 0;
}
