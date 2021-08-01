#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,sum=0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        switch(s[i])
        {
            case '1':
            sum+=a;
            break;
            case '2':
            sum+=b;
            break;
            case '3':
            sum+=c;
            break;
            case '4':
            sum+=d;
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}
