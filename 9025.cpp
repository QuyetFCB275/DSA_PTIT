#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

vector<vector<int>> vt;
bool visit[1005];
void DFS(int);
int kt;
int v, e, s, t;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        kt = 0;
        vt.clear();
        cin >> v >> e >> s >> t;
        vt.resize(v + 5);
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vt[x].push_back(y);
        }
        DFS(s);
        cout << endl;
    }
}

void DFS(int s)
{
    cout << s << " ";
    visit[s] = true;
    if (s == t)
        return;
    for (auto x : vt[s])
    {
        if (!visit[x])
        {
            DFS(x);
        }
    }
}