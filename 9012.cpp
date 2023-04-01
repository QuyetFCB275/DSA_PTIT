#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<vector<int>> ke;
bool vs[100005];

void nhap();
void BFS(int);
int tplt();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ke.clear();
        ke.resize(100005);
        memset(vs, false, 100005);
        nhap();

        int dt = tplt();
        for (int i = 1; i <= n; i++)
        {
            memset(vs, false, sizeof(vs));
            vs[i] = true;
            if (dt < tplt())
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}

void nhap()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
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

int tplt()
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vs[i])
        {
            cnt++;
            BFS(i);
        }
    }
    return cnt;
}