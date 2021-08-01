#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.length();
        if(len==2)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s[0];
            for(int i=1;i<=len;i=i+2)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
    }
}
