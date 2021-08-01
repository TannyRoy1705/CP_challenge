#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string c;
    for(int i=0;i<5;i++)
    {
        cin>>c;
        if(c[0]==s[0]||c[1]==s[1])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
