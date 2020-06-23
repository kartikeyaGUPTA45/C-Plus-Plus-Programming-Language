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

int min(struct Array arr)
{
    int min=arr.A[0];
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}

int main()
{
    struct Array arr ={{2,3,9,16,211,1,28,32,35},10,9};
    Display(arr);
    cout<<"\nMinimum element is:"<<min(arr);
    return 0;
}
