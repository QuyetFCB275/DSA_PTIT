#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long a[n + 5][m + 5], f[n + 5][m + 5];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
                f[i][j] = 1e9;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        }
        f[0][0] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                f[i][j] = min(f[i - 1][j - 1], min(f[i - 1][j], f[i][j - 1])) + a[i][j];
            }
        }
        cout << f[n][m] << endl;
    }
}