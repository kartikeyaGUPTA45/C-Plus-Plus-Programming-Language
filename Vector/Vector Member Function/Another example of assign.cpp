#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //7.Assign:It assigns new contents to the vector and replaces its current contents 
    int arr[]={1,2,3,4,5};
     vector<int>v1;
     vector<int>v2;
     v1.assign(arr,arr+5);
     v2.assign(arr,arr+2);
     cout<<"Elemenets of v1"<<endl;
     for(int i=0;i<v1.size();i++)
     {
         cout<<v1[i]<<endl;
     }
     cout<<"Elements of v2"<<endl;
     for(int i=0;i<v2.size();i++)
     {
         cout<<v2[i]<<endl;
     }
     return 0;
}
    
