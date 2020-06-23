# include<iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    for (i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}

void Set(struct Array *arr,int index,int x)
{
    if(index>=0 && index<arr->length)
        arr->A[index]=x;
}

int main()
{
    struct Array arr ={{2,3,9,16,21,18,28,32,35},10,9};
    cout<<"Array before Set function"<<endl;
    Display(arr);
    cout<<"\nArray after Set function"<<endl;
    Set(&arr,5,155);
    Display(arr);
    return 0;
}
