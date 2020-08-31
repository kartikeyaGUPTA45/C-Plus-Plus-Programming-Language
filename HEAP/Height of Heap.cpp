#include <iostream>
#include<cmath>
using namespace std;

int main() {

	  int n;
	  cin>>n;
	 int a[n];
	 for(int i=0;i<n;i++)
       cin>>a[i];
	int x=log2(n);
	cout<<"Height of Heap is:"<<x<<endl;
	return 0;
}
