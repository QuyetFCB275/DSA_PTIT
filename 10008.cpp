#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
vector<vector<ii>> ke;
int v, e, s;

void nhap();
void dijkstra();

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        nhap();
        dijkstra();
    }
}

void nhap()
{
    ke.clear();
    cin >> v >> e >> s;
    ke.resize(v + 1);
    for (int i = 0; i < e; i++)
    {
        int x, y, m;
        cin >> x >> y >> m;
        ke[x].push_back({y, m});
        ke[y].push_back({x, m});
    }
}

void dijkstra()
{
    priority_queue<ii, vector<ii>, greater<ii>> q;
    q.push({0, s});
    vector<int> d(v + 1, 1e9);
    d[s] = 0;
    while (!q.empty())
    {
        pair<int, int> p1 = q.top();
        q.pop();
        int dis = p1.first, u = p1.second;
        if (dis > d[u])
            continue;
        for (auto x : ke[u])
        {
            if (d[x.first] > d[u] + x.second)
            {
                d[x.first] = d[u] + x.second;
                q.push({d[x.first], x.first});
            }
        }
    }
    for (int i = 1; i <= v; i++)
        cout << d[i] << " ";
    cout << endl;
}