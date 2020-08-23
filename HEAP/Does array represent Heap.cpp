#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int flag=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int middle=n/2;
        for(int i=0;i<middle;i++)
        {
            if(2*i+1<n && 2*i+2<n)
            {
                if(a[2*i+1]>a[i] || a[2*i+2]>a[i])
                {
                    flag=1;
                    break;
                }
            }
            else if(2*i+1<n)
            {
                if(a[2*i+1]>a[i])
                {
                    flag=1;
                    break;
                }
            }

        }
        if(flag==1)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }	
	return 0;
}
