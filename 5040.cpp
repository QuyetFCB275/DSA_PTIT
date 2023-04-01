#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], f[n], g[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f[i] = 1;
            g[i] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
                f[i] = f[i - 1] + 1;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > a[i + 1])
                g[i] = g[i + 1] + 1;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, f[i] + g[i] - 1);
        }
        cout << ans << endl;
    }
}