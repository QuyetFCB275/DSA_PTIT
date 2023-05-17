#include <bits/stdc++.h>

using namespace std;

int n, m, parent[1005], e[1005], ans, dem;
typedef pair<int, int> ii;
// typedef pair<ii, int> iii;

bool cmp(pair<ii, int> p1, pair<ii, int> p2)
{
    return p1.second < p2.second;
}

int Find(int u)
{
    if (u == parent[u])
        return u;
    return Find(parent[u]);
}

void Union(pair<ii, int> q)
{
    int u = q.first.first, v = q.first.second, value = q.second;
    int a = Find(u), b = Find(v);
    if (a == b)
        return;
    if (e[a] < e[b])
        swap(a, b);
    parent[b] = a;
    e[a] += e[b];
    ans += value;
    dem++;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ans = dem = 0;
        vector<pair<ii, int>> vt;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
            e[i] = 1;
        }
        for (int i = 1; i <= m; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            vt.push_back({{x, y}, z});
        }
        sort(vt.begin(), vt.end(), cmp);

        for (int i = 0; i < vt.size(); i++)
        {
            Union(vt[i]);
            if (dem == n - 1)
                break;
        }
        cout << ans << endl;
    }
}