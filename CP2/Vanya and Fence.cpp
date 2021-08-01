#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,c1=0,c2=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=h)
        {
           c1++;
        }
        else
        {
           c2+=2;
        }
    }
    cout<<c1+c2;
}

