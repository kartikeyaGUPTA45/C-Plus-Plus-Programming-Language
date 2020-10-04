#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int>m; 
    m.insert({10,200});
    m[5]=100;
    m.insert({3,300});
    m[20];
    cout<<"Size of Map is: "<<m.size();
    return 0;
}
