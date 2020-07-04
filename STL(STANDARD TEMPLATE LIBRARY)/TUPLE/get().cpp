#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    tuple<int, int, int> tuple1;
    tuple<int,string,string> tuple2;
    
    tuple1=make_tuple(1,2,3);
    tuple2=make_tuple(1,"Study","Tonight");
    
    //get(): It is used to access the tuple values and modify them it accepts the index and tuple name as arguments to access a particular tuple element
   
   cout<<get<0>(tuple1)<<" "<<get<1>(tuple2)<<endl;
   
   //get is also used to modified the tuple
    get<0>(tuple1)=34;
    cout<<get<0>(tuple1)<<endl;
    
    
    return 0;
}
