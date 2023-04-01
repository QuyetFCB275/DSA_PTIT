#include <bits/stdc++.h>

using namespace std;

int M = 1e9 + 7;
int f[105][50005];

void init()
{
    for (int i = 1; i < 10; i++)
        f[1][i] = 1;
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 50000; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                if (k <= j)
                {
                    f[i][j] = (f[i][j] + f[i - 1][j - k]) % M;
                }
                else
                    break;
            }
        }
    }
}

int main()
{
    int t = 1;
    cin >> t;
    init();
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << f[n][k] << endl;
    }
}