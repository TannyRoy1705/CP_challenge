#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int t=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='7'||s[i]=='4')
        {
            t++;
        }
    }
    if(t==4||t==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
