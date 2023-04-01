#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> ke;
bool vs[1005];
int v, e, q;
int a, b;

int tplt();
void DFS(int);

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ke.clear();
        ke.resize(1005);
        memset(vs, false, 1005);

        cin >> v >> e;
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        cin >> q;
        while (q--)
        {
            memset(vs, false, 1005);
            cin >> a >> b;
            DFS(a);
            if (vs[b]) cout << "YES\n";
            else cout << "NO\n";
        }
        
    }
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