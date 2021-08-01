#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,d;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[n];
        }
        sort(a,a+n);
        int d = a[1]-a[0];
        for(int i=0; i<n; i++)
        {
            if(i>1)
            {
                if(d>(a[i]-a[i-1]))
                {
                    d=a[i]-a[i-1];
                }
            }
        }
        cout<<d<<endl;
    }
    return 0;
}

