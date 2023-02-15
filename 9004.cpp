#include <bits/stdc++.h>

using namespace std;

bool visit[10000];
vector<vector<int>> vt;
void DFS(int );

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(visit, false, 10000);
        int v, e, u;
        cin >> v >> e >> u;
        vt.clear();
        vt.resize(v+1);
        for (int i=1; i<=e; i++)
        {
            int x, y;
            cin >> x >> y;
            vt[x].push_back(y);
            vt[y].push_back(x);
        }
        DFS(u);
        cout << endl;
    }
}

void DFS(int u)
{
    cout << u << " ";
    visit[u] = true;
    for (auto x : vt[u])
    {
        if (!visit[x])
            DFS(x);
    }
}