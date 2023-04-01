#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5] = {0};
        int f[n + 5] = {1};
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[j] < a[i])
                {
                    f[i] = max(f[i], f[j] + a[i]);
                }
            }
        }
        int max = 0;
        for (int i=1; i<=n; i++)
        {
            if (max < f[i]) max = f[i];
        }
        cout << max;
    }
}