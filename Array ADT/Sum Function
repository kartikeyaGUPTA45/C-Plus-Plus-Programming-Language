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

int sum(struct Array arr)
{
    int sum=0;
    int i;
    for(i=0;i<arr.length;i++)
    {
        sum=sum+arr.A[i];
    }
    return sum;
}

int main()
{
    struct Array arr ={{2,3,9,16,211,1,28,32,35},10,9};
    Display(arr);
    cout<<"\nSum of element is:"<<sum(arr);
    return 0;
}
