#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n1 = a.size(), n2 = b.size();
        int f[n1 + 5][n2 + 5];

        for (int i = 0; i <= n1; i++)
        {
            for (int j = 0; j <= n2; j++)
            {
                if (i == 0 || j == 0)
                    f[i][j] = 0;
                else
                {
                    if (a[i - 1] == b[j - 1])
                    {
                        f[i][j] = f[i - 1][j - 1] + 1;
                    }
                    else
                        f[i][j] = max(f[i - 1][j], f[i][j - 1]);
                }
            }
        }
        cout << f[n1][n2] << endl;
    }
}