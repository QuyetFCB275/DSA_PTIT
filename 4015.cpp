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
        ll n, x;
        cin >> n >> x;
        ll a[n + 1];
        int ans = -1;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] <= x) ans = i;
        }
        cout << ans << endl;
    }
}