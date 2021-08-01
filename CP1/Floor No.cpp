#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int ans=1;
        n-=2;
        if(n==1||n==2)
        {
            cout<<1<<endl;
        }
        else
        {
            ans+=ceil((double)n/x);
            cout<<ans<<endl;
        }
    }
}
