#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c1=1,c2=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                c1++;
            }
            else if(a[i]<a[i+1])
            {
                c2=i+1;
            }
            else
            {
                c2=i+2;
            }
        }
        cout<<c1;
    }
}
