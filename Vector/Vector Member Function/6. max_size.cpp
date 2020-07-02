#include<iostream>
#include<vector>
using namespace std;


int main()
{
     vector<int>results;
     results={5,6};
     //6.max_size:It returns the maximum number of elements that the vector can hold. 
     // This is not the amount of storage space currently allocated to the vector, but the maximum size the vector could reach due to limitations in system implementations.
     cout<<"Max_size="<<results.max_size()<<endl;
    return 0;
}
