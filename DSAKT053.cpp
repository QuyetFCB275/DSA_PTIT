#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int l1 = a.size(), l2 = b.size();
        int f[l1 + 1][l2 + 1];

        for (int i = 0; i <= l1; i++)
        {
            for (int j = 0; j <= l2; j++)
            {
                if (i == 0 || j == 0)
                {
                    f[i][j] = 0;
                }
                else
                {
                    if (a[i - 1] == b[j - 1])
                    {
                        f[i][j] = f[i - 1][j - 1] + 1;
                    }
                    else
                    {
                        f[i][j] = max(f[i - 1][j], f[i][j - 1]);
                    }
                }
            }
        }
        cout << f[l1][l2] << endl;
    }
}