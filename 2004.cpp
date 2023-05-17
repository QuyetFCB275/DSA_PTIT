#include <bits/stdc++.h>

using namespace std;

int n, a[15][15], b[15][15];
vector<string> vt;

void Try(int i, int j, string s);

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		vt.clear();
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		cin >> n;
		for (int i=1; i<=n; i++)
		{
			for (int j=1; j<=n; j++)
			{
				cin >> a[i][j];
				b[i][j] = 1;
			}
		}
		if (a[1][1] == 0)
		{
			cout << -1;
		}
		else
		{
			b[1][1] = 0;
			Try(1, 1, "");
			if (vt.size() == 0)
			{
				cout << -1;
			}
			else
			{
				for (auto x : vt)
				{
					cout << x << " ";
				}
			}
		}
		cout << endl;
	}
}

void Try(int i, int j, string s)
{
	if (i == n && j == n)
	{
		vt.push_back(s);
		return;
	}
	
	if (a[i+1][j] && b[i+1][j])
	{
		b[i+1][j] = 0;
		Try(i+1, j, s + "D");
		b[i+1][j] = 1;
	}
	if (a[i][j-1] && b[i][j-1])
	{
		b[i][j-1] = 0;
		Try(i, j-1, s + "L");
		b[i][j-1] = 1;
	}
	if (a[i][j+1] && b[i][j+1])
	{
		b[i][j+1] = 0;
		Try(i, j+1, s + "R");
		b[i][j+1] = 1;
	}
	if (a[i-1][j] && b[i-1][j])
	{
		b[i-1][j] = 0;
		Try(i-1, j, s + "U");
		b[i-1][j] = 1;
	}
}