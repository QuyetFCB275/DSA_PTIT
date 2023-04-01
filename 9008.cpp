#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> ke;
bool vs[1005];
int v, e;

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
        cout << tplt() << endl;
    }
}

int tplt()
{
    int sum = 0;
    for (int i = 1; i <= v; i++)
    {
        if (!vs[i])
        {
            sum++;
            DFS(i);
        }
    }
    return sum;
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