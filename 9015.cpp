#include <bits/stdc++.h>

using namespace std;

int v, e, m[1005];
bool kt;
vector<vector<int>> ke;
vector<int> vs;

void DFS(int u)
{
    vs[u] = 1;
    for (auto x : ke[u])
    {
        if (!vs[x])
        {
            m[x] = u;
            DFS(x);
        }
        else if (vs[x] == 1)
        {
            kt = true;
            return;
        }
    }
    vs[u] = 2;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        ke.clear();
        ke.resize(v + 1);
        kt = false;
        memset(m, 0, 1005);
        vs.clear();
        vs.resize(v + 1);
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        for (int i = 1; i <= v; i++)
        {
            if (!vs[i] && !kt)
            {
                DFS(i);
            }
        }

        if (kt)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}