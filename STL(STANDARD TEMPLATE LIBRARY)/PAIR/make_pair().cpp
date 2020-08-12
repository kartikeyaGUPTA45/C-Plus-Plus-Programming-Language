 #include<iostream>
 using namespace std;
 
 int main()
 {
    pair<int,int>pair1,pair3;
    pair<int ,string>pair2;
    
    pair1=make_pair(1,2);
    pair2=make_pair(1,"STL");
    pair3=make_pair(2,3);
    
    cout<<pair1.first<<endl;
    cout<<pair2.second<<endl;
    
    if(pair1==pair3)
        cout<<"Pairs are Equal"<<endl;
    else
        cout<<"Pairs are not Equal"<<endl;
     
    return 0;
 }
