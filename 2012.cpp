#include <bits/stdc++.h>

using namespace std;

int a[200][200];
int m, n;
int sum;

void Try(int i, int j)
{
    if (i == m && j == n)
        sum++;
    else
    {
        if (i < m) Try(i + 1, j);
        if (j < n) Try(i, j + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> m >> n;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        }
        Try(1, 1);
        cout << sum << endl;
    }
}