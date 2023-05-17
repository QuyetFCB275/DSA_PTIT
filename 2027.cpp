#include <bits/stdc++.h>

using namespace std;

int ans, a[20][20], van, n;
bool vs[20];

void Try(int i, int sum, int val);

int main()
{
	cin >> n;
	ans = van = INT_MAX;
	memset(vs, false, 20);
	
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			cin >> a[i][j];
			if (a[i][j] > 0)
			van = min(van, a[i][j]);
		}
	}
	vs[1] = true;
	Try(1, 1, 0);
	cout << ans;
}

void Try(int i, int sum, int val)
{
	if (val + van * (n-sum+1) >= ans)
	    return;
	if (sum == n)
	{
		val += a[i][1];
		ans = min(ans, val);
		return;
	}
	for (int v=1; v<=n; v++)
	{
		if (!vs[v])
		{
			vs[v] = true;
			Try(v, sum + 1, val + a[i][v]);
			vs[v] = false;
		}
	}
}