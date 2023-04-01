#include <bits/stdc++.h>

using namespace std;

int a[105][105], d[105][105];
int n, m;

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == j)
                    d[i][j] = 0;
                else
                    d[i][j] = 1e9;
            }
        }
        for (int i = 0; i < m; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            a[x][y] = d[x][y] = d[y][x] = z;
        }
        for (int k = 1; k <= n; k++)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (d[i][j] > d[i][k] + d[k][j])
                        d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
        int q;
        cin >> q;
        while (q--)
        {
            int s, u;
            cin >> s >> u;
            cout << d[s][u] << endl;
        }
    }
}