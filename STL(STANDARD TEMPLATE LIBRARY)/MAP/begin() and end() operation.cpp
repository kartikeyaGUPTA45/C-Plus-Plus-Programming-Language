#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int>m; 
    m.insert({10,200});
    m[5]=100;
    m.insert({3,300});
    cout<<"Key-value pair of Map are:"<<endl;
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<"Key: "<<(*it).first<<" value: "<<(*it).second<<endl;
    }
    return 0;
}
