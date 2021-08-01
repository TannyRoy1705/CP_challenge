#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int j=0;j<n;j++)
        {
            if(a[j]!=a[j+1])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}

