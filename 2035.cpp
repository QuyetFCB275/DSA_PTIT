#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int n, k;
vector<string> v;
int x[10], vs[10];
ll ans;

void Try(int i);
void solve();

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    ans = INT_MAX;
    Try(1);
    cout << ans;
}

void Try(int i)
{
    for (int j = 1; j <= k; j++)
    {
        if (vs[j] == 0)
        {
            x[i] = j;
            vs[j] = 1;
            if (i == k)
            {
                solve();
            }
            else
            {
                Try(i + 1);
            }
            vs[j] = 0;
        }
    }
}

void solve()
{
    ll minn = 1e9, maxx = -1e9;
    for (auto s : v)
    {
        ll q = 0;
        for (int i = 1; i <= k; i++)
        {
            q = q * 10 + s[x[i] - 1] - '0';
        }
        minn = min(minn, q);
        maxx = max(maxx, q);
    }
    // cout << minn << " " << maxx << endl;
    ans = min(ans, maxx - minn);
}