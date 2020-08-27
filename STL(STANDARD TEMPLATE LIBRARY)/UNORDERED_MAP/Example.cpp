#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int>umap;
    umap["Kartikeya"]=30;
    umap["Gupta"]=10;
    umap["CSE"]=10;
    
    for(auto x: umap)
        cout<<x.first<<" "<<x.second<<endl;
}
