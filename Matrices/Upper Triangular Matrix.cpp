#include<iostream>
using namespace std;

struct Matrix
{
     int *A;
     int n;
};

void Set(struct Matrix *m,int i,int j,int x)
{
     if(i<=j)
        m->A[m->n*(i-1)+(i-2)*(i-1)/2+(j-1)]=x;
}

int Get(struct Matrix m,int i,int j)
{
     if(i<=j)
        return m.A[m.n*(i-1)+(i-2)*(i-1)/2+(j-1)];
     else
        return 0;
}

void Display(struct Matrix m)
{
 int i,j;
     for(i=1;i<=m.n;i++)
     {
         for(j=1;j<=m.n;j++)
         {
             if(i<=j)
                cout<<m.A[m.n*(i-1)+(i-2)*(i-1)/2+(j-1)]<<" ";
             else
                cout<<"0 ";
         }
         cout<<"\n";
     }
}

int main()
{
 struct Matrix m;
 int i,j,x;

 cout<<"Enter Dimension";
 cin>>m.n;
 m.A=new int [m.n*(m.n+1)/2];
 cout<<"enter all elements";
     for(i=1;i<=m.n;i++)
     {
         for(j=1;j<=m.n;j++)
         {
            cin>>x;
            Set(&m,i,j,x);
         }
     }
 
 cout<<"\n\n";
 
 Display(m);


 return 0;
}
