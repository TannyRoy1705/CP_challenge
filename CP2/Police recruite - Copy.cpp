#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int police=0,crime=0,t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n>0)
        {
            police=police+n;
        }
        else if(n<0)
        {
            if(police>0)
            {
               police=police-1;
            }
            else
            {
                crime=crime+1;
            }
        }
    }
    cout<<crime<<endl;
}

