#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<vector<int>> ke;
vector<pair<int, int>> vt;
bool vs[100005];

void nhap();
void DFS(int, int, int);
int tplt(int, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        ke.clear();
        ke.resize(n + 1);

        vt.clear();
        vt.resize(m + 1);
        memset(vs, false, n + 1);
        nhap();

        int cc = tplt(0, 0);

        for (auto v1 : vt)
        {
            int x = v1.first, y = v1.second;
            memset(vs, false, 100005);
            if (cc < tplt(x, y))
                cout << x << " " << y << " ";
        }
        cout << endl;
    }
}

void nhap()
{
    // cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        pair<int, int> p1;
        cin >> p1.first >> p1.second;
        ke[p1.first].push_back(p1.second);
        ke[p1.second].push_back(p1.first);
        vt.push_back(p1);
    }
}

void DFS(int u, int s, int t)
{
    vs[u] = true;
    for (auto x : ke[u])
    {
        if (u == s && x == t || u == t && x == s)
            continue;
        if (!vs[x])
        {
            vs[x] = true;
            DFS(x, s, t);
        }
    }
}

int tplt(int x, int y)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vs[i])
        {
            cnt++;
            DFS(i, x, y);
        }
    }
    return cnt;
}