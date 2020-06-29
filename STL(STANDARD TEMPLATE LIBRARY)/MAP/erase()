#include<iostream>
#include<map>
using namespace std;

int main()
{
    
    map<int ,int> m{ {1,2},{2,3},{3,4},{4,5},{5,6}};
    // creates a map m with keys 1,2,3 and their corresponding values 2,3,4 
    
    
    
    //erase(): removes the entry from the map pointed by the iterator (which is passed as parameter)
    // There are two variations of erase :

    //1.erase(iterator_itr) : This removes entry from the map pointed by iterator iterator_itr, reducing the size of map by 1.
    //2.erase(start_iterator, end_iterator) : It removes the elements in range specified by the start_iterator and end_iterator.
    
    cout<<"Elements before erase"<<endl;
    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<'\t'<< itr->second<<'\n';   
    }
    
    // Method-1
    m.erase(2);
    cout<<"Elements after erase"<<endl;
    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<'\t'<< itr->second<<'\n';   
    }
    
    //Method-2
    
    auto it=m.find(3);
    m.erase(it);
    
    cout<<"Elements after erase key=3"<<endl;
    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<'\t'<< itr->second<<'\n';   
    }
    
    
    
}
