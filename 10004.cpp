#include <bits/stdc++.h>

using namespace std;

int v, e;
vector<vector<int>> ke;

void nhap();
void solve();
void DFS(int u);
int check();
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
    if (check() == 1)
    {
        cout << 0;
    }
    else if (check() == 2)
    {
        cout << 1;
    }
    else if (check() == 3)
        cout << 2;
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

int check()
{
    DFS(1);
    for (int i = 1; i <= v; i++)
    {
        if (!vs[i])
            return 1;
    }

    int dem = 0;
    for (auto x : ke)
    {
        if (x.size() % 2 == 1)
            dem++;
    }
    if (dem == 0) return 3;
    if (dem == 2) return 2;
    return 1;
}