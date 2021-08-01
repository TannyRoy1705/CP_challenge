#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int am=24*60;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        int nm=am-((h*60)+m);
        cout<<nm<<endl;
    }
}
