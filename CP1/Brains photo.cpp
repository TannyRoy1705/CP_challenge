#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    char c;
    for(int i=0;i<n*m;i++)
    {
        cin>>c;
        if(c=='C'||c=='M'||c=='Y')
        {
            cout<<"#Color";
            return 0;
        }
    }
    cout<<"#Black&White";
}
