#include <bits/stdc++.h>

using namespace std;

int a[505][505];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void nextto(int x, int y)
{
    for (int i = 0; i < 8; i++)
    {
        if (a[x + dx[i]][y + dy[i]] == 1)
        {
            a[x + dx[i]][y + dy[i]] = 0;
            nextto(x + dx[i], y + dy[i]);
        }
    }
}

void lienthong(int i, int j)
{
    a[i][j] = 0;
    nextto(i, j);
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        }
        int dem = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j])
                {
                    dem++;
                    lienthong(i, j);
                }
            }
        }
        cout << dem << endl;
    }
}