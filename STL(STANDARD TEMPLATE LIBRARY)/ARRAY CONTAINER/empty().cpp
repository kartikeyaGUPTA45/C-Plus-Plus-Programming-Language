#include <array> 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // declaration of array container 
    array<int, 5> array1{ 1, 2, 3, 4, 5 }; 
  
    //empty(): This method can be used to check whether the array is empty or not.
    //0:represents array is not empty
    //1:represents array is empty
  cout<<"Is the array is:"<<array1.empty();
    return 0; 
} 

