#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //7.Assign:It assigns new contents to the vector and replaces its current contents 
    vector<int> k;
    k.assign(7,40);
    cout<<"size of k:"<<k.size()<<endl;
    return 0;
}
    
