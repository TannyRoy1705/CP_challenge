#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        int mn=*min_element(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(mn!=arr[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
