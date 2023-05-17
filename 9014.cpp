#include <bits/stdc++.h>

using namespace std;

int n, m, parent[1005], e[1005];
bool kt;

int Find(int u)
{
	if (u == parent[u])
	    return u;
	return Find(parent[u]);
}

void Union(int u, int v)
{
	int a = Find(u), b = Find(v);
	if (a == b)
	    kt = true;
	if (e[a] < e[b])
	    swap(a, b);
	parent[b] = a;
	e[a] += e[b];
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		kt = false;
		for (int i=1; i<=n; i++)
		{
			parent[i] = i;
			e[i] = 1;
		}
		for (int i=0; i<m; i++)
		{
			int x, y;
			cin >> x >> y;
			Union(x, y);
		}
		if (kt) cout << "YES\n";
		else cout << "NO\n";
	}
}