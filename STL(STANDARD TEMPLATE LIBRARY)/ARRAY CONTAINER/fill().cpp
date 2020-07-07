#include<iostream>
#include<tuple>
using namespace std;

int main()
{
   //fill():This method assigns the given value to every element of the array 
    
    array<int,8> array2;
    array2.fill(5);
    cout << "array2 is : ";
    for(int i=0; i < 8; i++) {
    cout << array2[i] <<" ";
    }



    
    
    return 0;
}
