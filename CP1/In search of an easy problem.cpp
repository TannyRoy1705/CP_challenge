#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            count++;
        }
    }
    if(count>=1)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
}
