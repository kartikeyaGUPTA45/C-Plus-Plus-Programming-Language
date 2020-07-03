#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>results;
    results={5,6};
    //9.pop_back: removes the last element in the vector,thus reducing the size of the
     //vector by one.
     results.pop_back();
     cout<<"Elements of marks after doing pop_back"<<endl;
     for(int i=0;i<results.size();i++)
     {
         cout<<results[i]<<endl;
     }
    
     cout<<"Size of results vector:"<<results.size();
     return 0;
}
    
