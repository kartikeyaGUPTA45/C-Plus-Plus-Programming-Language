#include<iostream>
#include<map>
using namespace std;

int main()
{ 
    map<string,int>map1;
    map1["a"]=1000;   // inserts key = "a" with value = 1000
    map1["b"]=2000;   // inserts key = "b" with value = 2000
    map1["c"]=3000;   // inserts key = "c" with value = 3000
    map1["d"]=4000;   // inserts key = "d" with value = 4000
    map1["e"]=5000;   // inserts key = "e" with value = 5000
    
    //1.at or []: Both at and [ ] are used for accessing the elements in the map. The only difference between them is that at throws an exception if the accessed key is not present in the map, on the other hand operator [ ] inserts the key in the map if the key is not present already in the map
    
    cout<<map1.at("a")<<endl; //prints value associated with key "a",ie 1000
    
    // note that the parameters in the above at() are the keys not the index 
    
    cout<<map1["c"]; //prints value associated with key "c",ie 3000
    
    // at() or [] can also be used to modified the value
    
    map1.at("e")=4500; // changes the value associated with key "e" to 4500
    map1['c']=2500;   //// changes the value associated with key "c" to 2500
    
    
}
