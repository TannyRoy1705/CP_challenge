#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,b,sum=0;
    cin>>p>>b;
    for(int i=1;;i++)
    {
        sum+=p;
        if((sum%10==0)||(sum%10==b)) {cout<<i;break;}
        else continue;
    }
    return 0;
}
