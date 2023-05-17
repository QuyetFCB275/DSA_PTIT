#include <bits/stdc++.h>

using namespace std;

int n, m, ans;
int parent[100005], num[100005];

int find(int u)
{
    if (u != parent[u])
        return find(parent[u]);
    return parent[u];
}

void Union(int u, int v)
{
    int a = find(u), b = find(v);
    if (a == b)
        return;
    if (num[a] < num[b])
        swap(a, b);
    parent[b] = a;
    num[a] += num[b];
    ans = max(ans, num[a]);
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
            num[i] = 1;
        }
        for (int i = 1; i <= m; i++)
        {
            int x, y;
            cin >> x >> y;
            Union(x, y);
        }
        cout << ans << endl;
    }
}