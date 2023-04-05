#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
#define ii pair<int, int>
typedef long long ll;

void solve();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n + 5][m + 5];
    FOR(i, 1, n)
    {
        FOR(j, 1, m)
        cin >> a[i][j];
    }
    queue<pair<ii, int>> q;
    q.push({{1, 1}, 0});
    while (!q.empty())
    {
        pair<ii, int> p = q.front();
        q.pop();
        int min = p.second;
        ii po = p.first;
        int x = po.first, y = po.second, value = a[x][y];
        if (value == 0)
            continue;

        if (x == n && y == m)
        {
            cout << min;
            return;
        }

        if (x + value <= n)
        {
            q.push({{x + value, y}, min + 1});
        }
        if (y + value <= m)
        {
            q.push({{x, y + value}, min + 1});
        }
        a[x][y] = 0;
    }
    cout << -1;
}