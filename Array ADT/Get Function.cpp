# include<iostream>

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
        cout<<arr.A[i]<<" ";
}

int Get(struct Array arr,int index)
{
    if (index>=0 && index<arr.length)
        return arr.A[index];
    return -1;
}
int main()
{
    struct Array arr1={{2,3,9,16,18,21,28,32,35},10,10};
    int get=Get(arr1,5);
    Display(arr1);
    cout<<"\nNumber we get:"<<get;
    return 0;
}
