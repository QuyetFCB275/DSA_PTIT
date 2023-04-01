#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        string a, b, c;
        cin >> a >> b >> c;

        int f[x + 5][y + 5][z + 5];

        for (int i = 0; i <= x; i++)
        {
            for (int j = 0; j <= y; j++)
            {
                for (int k = 0; k <= z; k++)
                {
                    if (i == 0 || j == 0 || k == 0)
                        f[i][j][k] = 0;
                    else
                    {
                        if (a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1])
                        {
                            f[i][j][k] = f[i - 1][j - 1][k - 1] + 1;
                        }
                        else
                            f[i][j][k] = max(f[i - 1][j][k], max(f[i][j - 1][k], f[i][j][k - 1]));
                    }
                }
            }
        }
        cout << f[x][y][z] << endl;
    }
}