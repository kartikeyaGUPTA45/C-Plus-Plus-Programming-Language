#include <array> 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // declaration of array container 
    array<int, 5> myarray{ 1, 2, 3, 4, 5 }; 
  
    // using end() to print array 
    for (auto it = myarray.begin(); 
         it != myarray.end(); ++it) 
        cout << ' ' << *it; 
    return 0; 
} 
