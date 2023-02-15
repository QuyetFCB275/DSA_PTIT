#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a + n);
        ll sum = 0;
        int i = 0;
        while (a[i] <= k / 2)
        {
            mp[a[i]]--;
            ll x = k - a[i];
            sum += mp[x];
            // mp[x]--;
            i++;
        }
        cout << sum << endl;
    }
}