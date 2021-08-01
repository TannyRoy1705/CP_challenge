#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int a[4];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3,greater<int>());
        if(a[0]!=a[1]) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            cout<<a[0]<<" "<<a[2]<<" "<<a[2]<<endl;
        }
    }
    return 0;

}
