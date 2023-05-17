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

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    vs[u] = true;

    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for (auto i : ke[x])
        {
            if (!vs[i])
            {
                q.push(i);
                vs[i] = true;
                van.push_back({x, i});
            }
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
        BFS(s);
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