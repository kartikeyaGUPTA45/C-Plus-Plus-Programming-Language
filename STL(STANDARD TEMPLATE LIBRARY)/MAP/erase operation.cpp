#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int>m; 
    m.insert({10,200});
    m[5]=100;
    m.insert({3,300});
    cout<<"Size of Map: "<<m.size()<<endl;
    m.erase(10);
    cout<<"Size of Map after erase operation: "<<m.size();
    return 0;
}
