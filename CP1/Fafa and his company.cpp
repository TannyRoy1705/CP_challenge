#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,count=1;
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        a=n-i;
        if(a%i==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
