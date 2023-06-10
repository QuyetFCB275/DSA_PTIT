#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    long x = 0, y = 0;
    for (int i = 0; i < a.size(); i++)
    {
        x = x * 2 + (a[i] - '0');
    }
    for (int i = 0; i < b.length(); i++)
    {
        y = y * 2 + (b[i] - '0');
    }
    cout << x * y << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}