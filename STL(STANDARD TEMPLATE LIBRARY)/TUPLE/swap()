#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    tuple<int, int, int> tuple1;
    tuple<int,string,string> tuple2;
    
    tuple1=make_tuple(1,2,3);
    tuple2=make_tuple(1,"Study","Tonight");
    
    //4.swap():swaps the elements of the two different tuples.
     
     tuple<int,string,string> tuple3;
     tuple3=make_tuple(2,"Hard"," work");
     tuple2.swap(tuple3);
     cout<<"The elements of tuple2 are:"<<endl;
     cout<<get<0>(tuple2)<<" "<<get<1>(tuple2)<<" "<<get<2>(tuple2)<<endl;
     cout<<get<0>(tuple3)<<" "<<get<1>(tuple3)<<" "<<get<2>(tuple3)<<endl;
        
    
    return 0;
}
