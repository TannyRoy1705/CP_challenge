#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            if(a<2*b)
            {
                cout<<pow((2*b),2)<<endl;
            }
            else if(a>2*b)
            {
                cout<<pow(a,2)<<endl;
            }
            else if(a==2*b)
            {
                cout<<pow(a,2)<<endl;
            }
        }
        else if(a<b)
        {
            if(2*a>b)
            {
                cout<<pow((2*a),2)<<endl;
            }
            else if(2*a<b)
            {
               cout<<pow(b,2)<<endl;
            }
            else if(2*a==b)
            {
                cout<<pow(b,2)<<endl;
            }
        }
        else if(a==b)
        {
            cout<<pow(2*a,2)<<endl;
        }
    }
    return 0;
}
