#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[2*n];
        int b[n];
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<2*n;i++)
        {
            if(a[i]!=a[i+1])
            {
                a[i]=a[i+1];
            }
        }
        for(int j=0;j<n;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
}
