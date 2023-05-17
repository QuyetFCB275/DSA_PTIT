#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> van;
bool vs[1005];
vector<vector<int>> ke;
int v, e, s;

bool check()
{
    for (int i = 1; i <= v; i++)
    {
        if (!vs[i])
            return true;
    }
    return false;
}

void DFS(int u)
{
    vs[u] = true;
    for (auto x : ke[u])
    {
        if (!vs[x])
        {
            van.push_back({u, x});
            DFS(x);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e >> s;
        van.clear();
        memset(vs, false, 1005);
        ke.clear();
        ke.resize(v + 1);
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        DFS(s);
        if (check())
            cout << -1;
        else
        {
            for (auto x : van)
            {
                cout << x.first << " " << x.second << endl;
            }
        }
        cout << endl;
    }
}