#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        ll count=0, min_a=INT_MAX,min_b=INT_MAX;
        for(int i=0,j=0;i<n,j<n;i++,j++)
        {
            min_a=min(min_a,a[i]);
            min_b=min(min_b,b[i]);
        }
        for( int i=0,j=0;i<n,j<n;i++,j++)
        {
            ll x=0,y=0;
            x=(a[i]-min_a);
            y=(b[i]-min_b);
            count=count+max(x,y);
        }
        cout<<count<<endl;
    }
    return 0;
}

