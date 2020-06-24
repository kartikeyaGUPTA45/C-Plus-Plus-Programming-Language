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

int isSorted(struct Array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        if (arr.A[i]>arr.A[i+1])
            return 0;   // For not Sorted
    }
    return 1;  // For Sorted
}


int main()
{
    struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};
    struct Array arr1={{2,3,9,16,111,212,123,312,3},10,9};
    Display(arr);
    Display(arr1);
    cout<<"\nIs arr Sorted(0 for NO and 1 for YES :"<<isSorted(arr)<<endl;
    cout<<"\nIs arr1 Sorted(0 for NO and 1 for YES :"<<isSorted(arr1)<<endl;
    return 0;
}
