#include<iostream>
using namespace std;
int main()
 {
     int t,m;
     cin>>m;
     for(t=1;t<=m;t++)
     {
         int i,j,n;
         cin>>n;
         int a[n][n];
         for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
             {
                 cin>>a[i][j];
             }
         }
        for(j=0;j<n;j++)
        {
            for(i=n-1;i>=0;i--)
            {
               cout<<a[i][j]<<" ";
               
            }
        }
        cout<<endl;
     }
     return 0;
 }
