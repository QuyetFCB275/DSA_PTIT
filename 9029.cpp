#include <bits/stdc++.h>

using namespace std;

int v, e, x[100005];
vector<vector<int>> ke;
bool vs[100005];
bool kt;

void Try(int i, int u);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        kt = false;
        cin >> v >> e;
        ke.clear();
        ke.resize(v + 100);
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for (int i = 1; i <= v; i++)
        {
            memset(vs, false, sizeof(vs));
            vs[i] = true;
            Try(1, i);
            if (kt)
                break;
        }
        if (kt)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}

void Try(int i, int u)
{
    x[i] = u;
    if (i == v)
    {
        kt = true;
        return;
    }

    if (ke[u].empty())
        return;
    for (auto x : ke[u])
    {
        if (!vs[x])
        {
            vs[x] = true;
            Try(i + 1, x);
            vs[x] = false;
        }
    }
}