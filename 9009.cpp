#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> ke;
bool vs[1005];
int v, e;

int tplt();
void BFS(int);

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
            BFS(i);
        }
    }
    return sum;
}

void BFS(int u)
{
    queue<int> qe;
    qe.push(u);

    while (!qe.empty())
    {
        int x = qe.front();
        vs[x] = true;
        qe.pop();

        for (auto i : ke[x])
        {
            if (!vs[i])
            {
                qe.push(i);
            }
        }
    }
}