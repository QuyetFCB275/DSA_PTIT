#include <bits/stdc++.h>

using namespace std;

int x[100];
int n, k;

bool dk()
{
    for (int i = 1; i <= k; i++)
    {
        if (x[i] != n - k + i)
            return false;
    }
    return true;
}

void solve()
{
    set<int> se;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> x[i];
        se.insert(x[i]);
    }

    int sum = 0;
    if (dk())
        sum = k;
    else
    {
        int t = k;
        while (x[t] == n - k + t)
            t--;
        x[t]++;
        se.insert(x[t]);
        for (int i = t + 1; i <= k; i++)
        {
            x[i] = x[t] + i - t;
            se.insert(x[i]);
        }
        sum = se.size() - k;
    }
    cout << sum << endl;
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