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
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n-1; i++)
        {
            if(a[i]!=a[i+1])
            {
                if(a[i+1]!=a[i+2])
                {
                    if(a[i]==a[i+2])
                    {
                        cout<<i+2<<endl;
                        break;
                    }
                }
            }
            if(a[i]!=a[i+1])
            {
                if(a[i+1]==a[i+2])
                {
                    if(a[i]!=a[i+2])
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
            if(a[i]==a[i+1])
            {
                if(a[i+1]!=a[i+2])
                {
                    if(a[i]!=a[i+2])
                    {
                        cout<<i+3<<endl;
                        break;
                    }
                }
            }
        }
    }
}
