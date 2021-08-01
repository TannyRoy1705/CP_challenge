#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,sum=0,lev=0;
    cin>>c;
    for(int i=1;i<=c;i++)
    {
        sum=sum+i;
        c=c-sum;

        if(c>=0)
            lev++;
        else
            break;
    }
    cout<<lev;
}
