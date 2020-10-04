#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int>m; 
    m.insert({10,200});
    m[5]=100;
    m.insert({3,300});
    if(m.find(5)==m.end())
        cout<<"Not Found";
    else
        cout<<"Found";
    return 0;
}
