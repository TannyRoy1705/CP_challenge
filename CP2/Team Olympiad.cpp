#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t,c1=0,c2=0,c3=0,t1[5000],t2[5000],t3[5000];
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<t; i++)
    {
        if(arr[i]==1)
        {
            t1[c1]=i+1;
            c1++;
        }
        if(arr[i]==2)
        {
            t2[c2]=i+1;
            c2++;
        }
        if(arr[i]==3)
        {
            t3[c3]=i+1;
            c3++;
        }
    }
    int mini=min(min(c1,c2),c3);
    cout<<mini<<endl;
    for(c1=0,c2=0,c3=0;c1<mini,c2<mini,c3<mini;c1++,c2++,c3++)
    {
        cout<<t1[c1]<<" "<<t2[c2]<<" "<<t3[c3]<<endl;
    }
}

