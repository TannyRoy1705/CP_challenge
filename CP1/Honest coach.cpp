#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        for(int j=0; j<n; j++)
        {
            for(int l=0; l<n; l++)
            {
                if(l>0)
                {
                    if(a[l]<a[l-1])
                    {
                        int m=a[l-1];
                        a[l-1]=a[l];
                        a[l] = m;
                    }
                }
            }
        }
        int d = a[1]-a[0];
        for(int i=0; i<n; i++)
        {
            if(i>1)
            {
                if(d>(a[i]-a[i-1]))
                {
                    d=a[i]-a[i-1];
                }
            }
        }
        cout<<d<<endl;
    }
    return 0;
}
