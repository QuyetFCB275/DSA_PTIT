#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> ke;
bool vs[1005];
int v, e;

void BFS(int);
bool check();

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
            // ke[y].push_back(x);
        }
        if (check())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

bool check()
{
    for (int i = 1; i <= v; i++)
    {
        memset(vs, false, 1005);
        BFS(i);
        for (int i = 1; i <= v; i++)
        {
            if (!vs[i])
                return false;
        }
    }
    return true;
}

void BFS(int u)
{
    queue<int> qe;
    qe.push(u);
    vs[u] = true;

    while (!qe.empty())
    {
        int x = qe.front();
        qe.pop();

        for (auto i : ke[x])
        {
            if (!vs[i])
            {
                qe.push(i);
                vs[i] = true;
            }
        }
    }
}