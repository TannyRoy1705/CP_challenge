#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int k,n,w,s=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        s=s+i;
    }
    int d=(s*k)-n;
    if(d<0)
    {
        cout<<"0";
    }
    else
    {
        cout<<d;
    }
}
