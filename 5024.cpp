// 0 1 1 1 1 1
// 1 0 0 0 0 0
// 1 0 0 0 0 0
// 1 0 0 0 0 0
// 1 0 0 0 0 0

#include <bits/stdc++.h>

using namespace std;

int f[105][105];

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n1 = a.size(), n2 = b.size();

        f[0][0] = 0;
        for (int i = 1; i <= n1; i++)
            f[i][0] = i;
        for (int i = 1; i <= n2; i++)
            f[0][i] = i;

        for (int i = 1; i <= n1; i++)
        {
            for (int j = 1; j <= n2; j++)
            {
                if (a[i - 1] == b[j - 1])
                {
                    f[i][j] = f[i - 1][j - 1];
                }
                else
                {
                    f[i][j] = min(f[i - 1][j], min(f[i][j - 1], f[i-1][j-1])) + 1;
                }
            }
        }
        cout << f[n1][n2] << endl;
    }
}