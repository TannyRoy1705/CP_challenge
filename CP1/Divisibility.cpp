#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m;
    cin>>t;
    long long int a,b;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<b-(a%b)<<endl;
        }
    }

}
