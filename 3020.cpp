#include <bits/stdc++.h>

using namespace std;

int dem;
string s;

void solve();
void solve1(int );
void solve2(int );
bool check();

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> s;
		bool kt = true;
		dem=0;
		while(kt)
		{
			solve();
			if (check())
			{
				kt = false;
			}
		}
		cout << dem << endl;
	}
}

void solve()
{
	int i;
	for (i=0; i<s.size(); i++)
	{
		if (s[i] == '[' && s[i+1] == ']')
		    i++;
		else break;
	}
	if (i == s.size())
	    return ;
	if (s[i] == '[')
	{
		solve1(i);
	}
	else 
	{
		solve2(i);
	}
}

void solve1(int i)
{
	int j, sum=0;
	for (j=i+1; j<s.size(); j++)
	{
		if (s[j] == ']')
		    break;
	}
	for (int k=j; k>i+1; k--)
	{
		swap(s[k], s[k-1]);
		sum++;
	}
	dem += sum;
}

void solve2(int i)
{
	int j, sum=0;
	for (j=i+1; j<s.size(); j++)
	{
		if (s[j] == '[')
		    break;
	}
	for (int k=j; k>i; k--)
	{
		swap(s[k], s[k-1]);
		sum++;
	}
	dem += sum;
}

bool check()
{
	if (s[0] == ']')
	    return false;
	for (int i=0; i<s.size(); i++)
	{
		if (s[i] == s[i+1])
		    return false;
	}
	return true;
}