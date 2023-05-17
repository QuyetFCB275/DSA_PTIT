#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int ans, n, k, s;
vector<vector<int>> v;
vector<int> tmp;

void Try(int x, int dem, int sum);

int main()
{

    cin >> n >> k >> s;
    while (n != 0 || k != 0 || s != 0)
    {
        ans = 0;
        Try(1, 0, 0);
        cout << ans << endl;
        cin >> n >> k >> s;
    }
}

void Try(int x, int dem, int sum)
{
    if (dem == k)
    {
        if (sum == s)
        {
            ans++;
        }
        return;
    }

    for (int i = x; i <= n; i++)
    {
        Try(i + 1, dem + 1, sum + i);
    }
}