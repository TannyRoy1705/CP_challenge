#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        cout<<a<<" "<<a*b<<" "<<a+(a*b)<<endl;
    }
}
