#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,cm=0,cc=0,cd=0;
    cin>>r;
    int m[r],c[r];
    for(int i=0;i<r;i++)
    {
        cin>>m[i]>>c[i];
        if(m[i]>c[i])
        {
            cm++;
        }
        else if(m[i]==c[i])
        {
            cd++;
        }
        else if(m[i]<c[i])
        {
            cc++;
        }
    }
    if(cd==3)
    {
        cout<<"Friendship is magic!^^";
    }
    else
    {
        if(cm>cc)
        {
            cout<<"Mishka";
        }
        else if(cm<cc)
        {
            cout<<"Chris";
        }
        else if(cm==cc)
        {
            cout<<"Friendship is magic!^^";
        }
    }
}
