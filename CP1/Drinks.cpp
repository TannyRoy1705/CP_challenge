#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float c,a,b=0.0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        b=b+arr[i];
    }
    c=(b/n);
    cout<<c;
}
