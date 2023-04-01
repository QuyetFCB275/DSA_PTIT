#include <bits/stdc++.h>

using namespace std;

int n, m, s, c;
vector<vector<int>> ke;
vector<int> e;
bool vs[1000];

void nhap();
void BFS(int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(vs, false, sizeof(vs));
        ke.clear();
        ke.resize(1005);
        e.clear();
        e.resize(1005);
        nhap();
        BFS(s);
        if (!vs[c])
        {
            cout << -1;
        }
        else
        {
            e[s] = 0;
            vector<int> st;
            int v = c;
            while (v != 0)
            {
                st.push_back(v);
                v = e[v];
            }
            reverse(st.begin(), st.end());
            for (auto x : st)
                cout << x << " ";
        }
        cout << endl;
    }
}

void nhap()
{
    cin >> n >> m >> s >> c;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
    }
}

void BFS(int u)
{
    queue<int> qe;
    qe.push(u);
    e[u] = 0;
    vs[u] = true;

    while (!qe.empty())
    {
        int x = qe.front();
        // vs[x] = true;
        qe.pop();

        for (auto i : ke[x])
        {
            if (!vs[i])
            {
                qe.push(i);
                e[i] = x;
                vs[i] = true;
            }
        }
    }
}