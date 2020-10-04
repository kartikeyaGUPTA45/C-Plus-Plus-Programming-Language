#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int>m; 
    // Map is used to store key-value pair in incresaing order.
    m.insert({10,200});
    m[5]=100;
    m.insert({3,300});
    cout<<"Key-value pair of Map are:"<<endl;
    for(auto x:m)
    {
        cout<<"Key: "<<x.first<<" value: "<<x.second<<endl;
    }
    return 0;
}
