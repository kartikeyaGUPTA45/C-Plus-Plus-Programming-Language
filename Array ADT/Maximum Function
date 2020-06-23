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

int max(struct Array arr)
{
    int max=arr.A[0];
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}

int main()
{
    struct Array arr ={{2,3,9,16,211,18,28,32,35},10,9};
    Display(arr);
    cout<<"\nMaximum element is:"<<max(arr);
    return 0;
}
