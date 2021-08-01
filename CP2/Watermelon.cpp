#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w,p,q,t;
    cin>>w;
    for(p=2;p<w;p=p+2)
    {
        q=w-p;
        if(q%2==0)
        {
            t=1;
        }
        else
        {
            t=0;
        }
    }
    if(t==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
