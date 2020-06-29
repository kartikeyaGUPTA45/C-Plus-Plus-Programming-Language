#include<iostream>
#include<map>
using namespace std;

int main()
{
    
    
    map<int ,int> m{ {1,2},{2,3},{3,4}};
    // creates a map m with keys 1,2,3 and their corresponding values 2,3,4 
   
    
    //insert():is used to insert entries in the map. Since keys are unique in a map, it first checks that whether the given key is already present in the map or not, if it is present the entry is not inserted in the map and the iterator to the existing key is returned otherwise new entry is inserted in the map.

    //There are two variations of insert():

    //1.insert(pair) : In this variation, a pair of key and value is inserted in the map. The inserted pair is always inserted at the appropriate position as keys are arranged in sorted order.
    //2.insert(start_itr , end_itr): This variation inserts the entries in range defined by start_itr and end_itr of another map.
    
    m.insert(pair<int,int>(4,5));
    /* inserts a new entry of key = 4 and value = 5 in map m */
    
    /* make_pair() can also be used for creating a pair */
 
    m.insert(make_pair(5,6));
    /* inserts a new entry of key = 5 and value = 6 */
    
    cout<<"After insertion element present at key=4 is:"<<m.at(4);
    
    
    
    
}
