#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int i,j;
    int m[6][6];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>m[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(m[i][j]==1)
            {
                cout<<(abs(i-2)+abs(j-2))<<endl;
            }
        }
    }
    return 0;
}
