#include<iostream>
using namespace std;
int main()
{
    int n,a,b,sum=0,k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {

        cin>>a>>b;
        sum=(a+k)-b;
        if(sum<0)
        {
            k=0;
        }
        else
        {
            k=sum;
        }
    }
    cout<<sum;

}
