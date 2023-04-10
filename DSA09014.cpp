#include <bits/stdc++.h>

using namespace std;

int v, e;
vector<vector<int>> ke;

void nhap();
void solve();
void DFS(int u);
bool check();
bool vs[1005];

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        memset(vs, false, 1005);
        nhap();
        solve();
    }
}

void nhap()
{
    cin >> v >> e;
    ke.clear();
    ke.resize(v + 1);
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

void solve()
{
    if (check())
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}

void DFS(int u)
{
    vs[u] = true;
    for (auto x : ke[u])
    {
        if (!vs[x])
        {
            DFS(x);
        }
    }
}

bool check()
{
    DFS(1);
    for (int i = 1; i <= v; i++)
    {
        if (!vs[i])
            return false;
    }
    return true;
}