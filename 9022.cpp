#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> vt;
void DFS(int );
bool visit[1005];

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(visit, false, 1005);
        vt.clear();
        int v, e, u;
        cin >> v >> e >> u;
        vt.resize(v + 1);
        while(e--)
        {
            int x, y;
            cin >> x >> y;
            vt[x].push_back(y);
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
        {
            DFS(x);
        }
    }
}