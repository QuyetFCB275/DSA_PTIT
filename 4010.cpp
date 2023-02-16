// -2 -5  6 -2 -3  1 5 -6
// -2 -7 -1 -3 -6 -5 0 -6

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
        int n;
        cin >> n;
        ll a[n + 5], sum[n + 5] = {0};
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
        }
        ll max1 = -1e5;
        for (int i = 1; i <= n; i++)
        {
            ll maxx = a[i];
            for (int j = i + 1; j <= n; j++)
            {
                if (maxx < sum[j] - sum[i-1])
                    maxx = sum[j] - sum[i-1];
            }
            max1 = max(max1, maxx);
        }
        cout << max1 << endl;
    }
}