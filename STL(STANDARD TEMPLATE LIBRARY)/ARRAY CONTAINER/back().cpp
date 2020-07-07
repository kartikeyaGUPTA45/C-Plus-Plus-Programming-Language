#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    array<int,10> array1={1,2,3,4,5,6,7,8,9};
    
    //back():This method returns the last element in the array. The point to note here is that if the array is not completely filled,
    //back() will return the rightmost element in the array.
    
    cout<<array1.back()<<endl;


    
    
    return 0;
}
