#include <bits/stdc++.h>

using namespace std;

long f[50][50];
int n, m;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        memset(f, 0, sizeof(f));
        f[n][m] = 1;
        for (int i = n; i >= 0; i--)
        {
            for (int j = m; j >= 0; j--)
            {
                if (i != n || j != m)
                {
                    f[i][j] = f[i][j + 1] + f[i + 1][j];
                }
            }
        }
        cout << f[0][0] << endl;
    }
}