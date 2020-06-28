#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    tuple<int, int, int> tuple1;
    tuple<int,string,string> tuple2;
    
    tuple1=make_tuple(1,2,3);
    tuple2=make_tuple(1,"Study","Tonight");
    
    int id;
    string first_name,last_name;
    //Tie :Tie values of a tuple to its references.
    
     tie(id,first_name,last_name)=tuple2;
     
     cout<<id<<" "<<first_name<<" "<<last_name<<endl;
    
    
    return 0;
}
