#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int n;
vector<string> vt;
int a[100][100];

void Try(int i, int j, string s)
{
    if (i == n && j == n)
    {
        vt.push_back(s);
        // return;
    }

    if (a[i + 1][j] == 1)
    {
        Try(i + 1, j, s + "D");
    }
    if (a[i][j + 1] == 1)
    {
        Try(i, j + 1, s + "R");
    }
}

void solve()
{
    vt.clear();
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    Try(1, 1, "");
    if (a[1][1] == 0 || a[n][n] == 0 || vt.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (auto x : vt)
            cout << x << " ";
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}