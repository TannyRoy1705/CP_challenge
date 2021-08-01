#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,tl,tc,tp;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    tl=(k*l)/(nl*n);
    tc=(c*d)/n;
    tp=p/(np*n);
    cout<<min(min(tc,tl),tp);
    return 0;
}
