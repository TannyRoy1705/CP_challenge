#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,count=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0; i<n-1; i++)
        {
            if(abs(a[i]-a[i+1])>1)
            {
                count=1;
                break;
            }
            else
            {
                count=0;
            }
        }
        if(count==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        count=0;
    }
}
