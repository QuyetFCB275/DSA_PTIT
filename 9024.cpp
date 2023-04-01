#include <bits/stdc++.h>

using namespace std;

int n, m, u;
vector<vector<int>> vt;
bool visited[1005];

void inp();
void BFS(int u);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        inp();
        BFS(u);
        cout << endl;
    }
}

void inp()
{
    cin >> n >> m >> u;
    memset(visited, false, sizeof(visited)/sizeof(visited[0]));
    vt.clear();
    vt.resize(n+5);

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        vt[x].push_back(y);
    }
}

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << v << " ";

        for (auto x : vt[v])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}