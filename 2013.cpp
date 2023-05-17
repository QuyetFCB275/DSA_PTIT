#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int ans, n, p, s;
vector<vector<int>> v;
vector<int> tmp;

bool check(int i);
void Try(int sum, int x, int cnt);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> p >> s;
        ans = 0;
        v.clear();
        Try(0, p + 1, 0);
        cout << ans << endl;
        for (auto x : v)
        {
            for (auto i : x)
                cout << i << " ";
            cout << endl;
        }
    }
}

bool check(int n)
{
    if (n == 0 || n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void Try(int sum, int x, int cnt)
{
    if (sum == n)
    {
        if (cnt == s)
        {
            v.push_back(tmp);
            ans++;
        }
        return;
    }

    for (int i = x; i < s; i++)
    {
        if (check(i))
        {
            tmp.push_back(i);
            Try(sum + 1, i + 1, cnt + i);
            tmp.pop_back();
        }
    }
}
