#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        while(n--)
        {
            int x; cin >> x;
            mp[x]++;
        }
        if (mp[k]) cout << mp[k] << endl;
        else cout << -1 << endl;
    }    
}