#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        long long s1=0,s2=0;
        cin>>n;
        for(int i=1;i<(n/2);i++)
        {
            s1=s1+pow(2,i);
        }
        s1=s1+pow(2,n);
        for(int j=(n/2);j<n;j++)
        {
            s2=s2+pow(2,j);
        }
        cout<<abs(s1-s2)<<endl;
    }
    return 0;
}
