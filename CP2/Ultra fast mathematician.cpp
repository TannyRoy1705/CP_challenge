#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    string s3[s1.size()];
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }
    }
}
