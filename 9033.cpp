#include <bits/stdc++.h>

using namespace std;

int v, e;
vector<vector<int>> ke;
vector<int> vt;
bool kt, vs[100005];
int dem;

void DFS(int u)
{
    vs[u] = true;
    for (auto x : ke[u])
    {
        if (!vs[x])
        {
            vt.push_back(x);
            dem++;
            DFS(x);
        }
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        memset(vs, false, 100);
        cin >> v >> e;
        ke.clear();
        ke.resize(v + 1);
        kt = true;
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for (int i = 1; i <= v; i++)
        {
            if (!vs[i])
            {
                vt.clear();
                vt.push_back(i);
                dem = 1;
                DFS(i);
                for (auto x : vt)
                {
                    if (ke[x].size() != dem - 1)
                    {
                        kt = false;
                        break;
                    }
                }
            }
            if (!kt)
                break;
        }
        if (kt)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}