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
        int arr[n],g=0,b=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2!=i%2)
            {
                if(i%2==0)
                {
                    g++;
                }
                else
                {
                    b++;
                }
            }
        }
        if(g!=b)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<g<<endl;
        }
    }
    return 0;
}
