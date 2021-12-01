#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,b,d;
        cin>>r>>b>>d;
        if (r > b)
            swap(r, b);
        cout << (r * (d + 1) >= b ? "YES" : "NO") << endl;
    }
}
