#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,c1=0,c2=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if(c1>c2)
    {
        cout<<"Anton"<<endl;
    }
    else if(c1==c2)
    {
        cout<<"Friendship"<<endl;
    }
    else
    {
        cout<<"Danik"<<endl;
    }
}
