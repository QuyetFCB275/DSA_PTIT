#include <bits/stdc++.h>

using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

char a[105][105];
int n, m;
int dem;

void Try(int i, int j)
{
    for (int k = 0; k < 8; k++)
    {
        int v1 = i + dx[k], v2 = j + dy[k];
        if (a[v1][v2] == 'W')
        {
            a[v1][v2] = '.';
            Try(v1, v2);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 'W')
            {
                a[i][j] = '.';
                Try(i, j);
                dem++;
            }
        }
    }
    cout << dem;
}