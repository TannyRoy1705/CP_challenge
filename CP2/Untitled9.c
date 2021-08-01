#include <bits/stdc++.h>
using namespace std;
bool vis[55];
int a[105], n;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(vis, 0, sizeof(vis));
        vector<int>v;
        cin >> n;
        for(int i = 1; i <= n * 2; i++)
        {
            cin >> a[i];
            if(!vis[a[i]])
            {
                vis[a[i]] = 1;
                v.push_back(a[i]);
            }
        }
        for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
        cout << endl;
    }
    return 0;
}
