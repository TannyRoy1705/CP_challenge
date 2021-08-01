#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],max=-9999,min=9999;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<3;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<max-min<<endl;
}
