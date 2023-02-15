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
        ll n, sum = 0, check = 0;
        cin >> n;
        map<ll, ll> mp;
        int a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            mp[i] = mp[i - 1] + a[i];
            sum += a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            // if (2 * (mp[i] - a[i]) == sum)
            // {
            //     cout << i << " ";
            //     check = 1;
            // }
            // cout << mp[i] << " ";
            if (mp[i-1] == sum - mp[i])
            {
                cout << i << " ";
                check = 1;
                break;
            }
        }
        if (!check)
            cout << -1;
        cout << endl;
    }
}