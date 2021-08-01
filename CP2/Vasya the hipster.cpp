#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d,s;
    cin>>a>>b;
    if(a>b)
    {
        d=b;
        s=(a-b)/2;
    }
    else if(a<b)
    {
        d=a;
        s=(b-a)/2;
    }
    else
    {
        d=a;
        s=0;
    }
    cout<<d<<" "<<s;
}

