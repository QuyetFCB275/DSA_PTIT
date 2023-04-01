#include <bits/stdc++.h>

using namespace std;

int M = 1e9 + 7;
int c[1005][1005];

int main()
{
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                c[j][i] = 1;
            else
            {
                c[j][i] = (c[j - 1][i - 1] + c[j][i - 1]) % M;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << c[k][n] << endl;
    }
}