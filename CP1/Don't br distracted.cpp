#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        char arr[d];
        for(int i=0; i<d; i++)
        {
            cin>>arr[i];
        }
        int a[d];
        bool flag=true;
        for(int i=0; i<d; i++)
        {
            a[i] = arr[i];
        }
        for(int i=0; i<d; i++)
        {
            if(a[i] <= a[i+1])
            {
                flag = true;
            }
        }
        if(flag)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}

