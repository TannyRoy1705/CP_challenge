#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum=0,count=0;
    cin>>n>>t;
    int left=240-t;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(5*i);
        if(left>=sum)
        {
            count++;
        }
    }
    cout<<count;
}
