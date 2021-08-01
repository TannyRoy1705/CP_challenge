#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        int b=n/2;
        cout<<b<<endl;
        for(int i=0;i<b;i++)
        {
            cout<<2<<endl;
        }
    }
    else if((n==2)||(n==3))
    {
        cout<<1<<endl;
        cout<<n<<endl;
    }
    else
    {
        if(n%2==1)
        {
            cout<<n/2<<endl;
            int c=(n/2)-1;
            for(int i=0;i<c;i++)
            {
                cout<<2<<endl;
            }
            cout<<3<<endl;
        }
    }
}

