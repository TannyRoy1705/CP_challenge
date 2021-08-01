#include<iostream>
#include<string>
using namespace std;
int main()
{
    string m;
    int n,c,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>m;
        }
    }
    for(int i=0;i<n;i++)
    {
        if((m[i][0]&&m[i][1])==1||(m[i][0]&&m[i][2])==1||(m[i][1]&&m[i][2])==1)
        {
            c=1;
        }
    }
    for(int k=0;k<n;k++)
    {
        if(c==1)
        {
           arr[]=1;
        }
    }
    int l=sizeof(arr)/sizeof(arr[0]);
    cout<<count(arr,arr+l,1);
}
