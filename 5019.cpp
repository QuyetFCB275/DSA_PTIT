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
        int a[n + 5][m + 5];
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (a[i][j])
                    a[i][j] = min(a[i - 1][j - 1], min(a[i - 1][j], a[i][j - 1])) + 1;
                ans = max(ans, a[i][j]);
            }
        }
        cout << ans << endl;
    }
}