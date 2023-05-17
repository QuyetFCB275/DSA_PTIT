#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> G;
vector<int> ans;
vector<bool> vs;

void DFS(int u, int pre, vector<int> path)
{
	vs[u] = true;
	for (auto x : G[u])
	{
		if (x == 1 && x != pre && ans.empty())
		{
			path.push_back(x);
			ans = path;
			return;
		}
		if (!vs[x])
		{
			path.push_back(x);
			DFS(x, u, path);
			path.pop_back();
		}
	}
}

void solve()
{
	int n, m;
	cin >> n >> m;
	G.clear();
	G.resize(n+1);
	vs.clear();
	vs.resize(n+1, false);
	ans.clear();
	
	for (int i=0; i<m; i++)
	{
		int x, y;
		cin >> x >> y;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	for (auto &i : G) {
        sort(i.begin(), i.end());
    }
	DFS(1, -1, {1});
	if (ans.empty())
	{
		cout << "NO\n";
	}
	else
	{
		for (auto x : ans)
		    cout << x << " ";
		cout << endl;
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}