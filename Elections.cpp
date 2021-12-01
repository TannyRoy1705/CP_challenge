#include<iostream
#include<bits/std++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        int d=max(a,max(b,c)),e,f;
        if(a==b && b==c)
        {
            cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
        }
        else
        {
            if(a==d)
            {
                e=a-b+1;
                f=a-c+1;
                cout<<0<<" "<<e<<" "<<f<<endl;
            }
            else if(b==d)
            {
                e=b-a+1;
                f=b-c+1;
                cout<<e<<" "<<0<<" "<<f<<endl;
            }
            else
            {
                e=c-b+1;
                f=c-a+1;
                cout<<f<<" "<<e<<" "<<0<<endl;
            }
        }
    }
}
