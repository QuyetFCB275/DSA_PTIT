#include <bits/stdc++.h>

using namespace std;

int n, s;

string solve1(int n,int sum)
{
    string s(n, '0');
    s = "0" + s;
    for (int i = n; i >= 2; i--)
    {
        if (sum >= 10)
        {
            s[i] = '9';
        }
        else
        {
            s[i] = (sum - 1) + '0';
        }
        sum -= (s[i] - '0');
    }
    s[1] = sum + '0';
    s.erase(0, 1);
    return s;
}

string solve2(int n,int sum)
{
    string s(n, '0');
    s = "0" + s;
    for (int i = 1; i <= n; i++)
    {
        if (sum >= 10)
        {
            s[i] = '9';
        }
        else
        {
            s[i] = sum + '0';
        }
        sum -= (s[i] - '0');
    }
    s.erase(0, 1);
    return s;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        cin >> n >> s;
        if (9 * n < s || s <= 1)
        {
            cout << -1 << " " << -1;
            return 0;
        }
        cout << solve1(n, s) << " " << solve2(n, s);
    }
}