#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int a[n],c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        if(c1%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else if(c1==0&&c2%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
