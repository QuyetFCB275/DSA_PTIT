#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a[100005];
map<ll, ll> mp;
ll n, k;

bool check()
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (mp[sum - k])
            return true;
        mp[sum]++;
    }
    return false;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        mp.clear();
        mp[0] = 1;
        if (check())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}