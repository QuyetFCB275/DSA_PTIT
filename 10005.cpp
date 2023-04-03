#include <bits/stdc++.h>

using namespace std;

int v, e;
vector<vector<int>> ke;

void nhap();
void solve();
void DFS(int u);
int check();
bool vs[1005];
map<int, int> mp_s;
map<int, int> mp_e;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        memset(vs, false, 1005);
        mp_s.clear();
        mp_e.clear();
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
        mp_s[x]++;
        mp_e[y]++;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

void solve()
{
    if (check())
        cout << 1;
    else
        cout << 0;
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
    for (int i = 1; i <= v; i++)
    {
        if (mp_s[i] != mp_e[i])
            dem++;
    }
    if (dem)
        return 0;
    return 1;
}