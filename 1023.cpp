#include <bits/stdc++.h>

using namespace std;

int x[100], a[100];
int n, k;

bool check()
{
    for (int i = 1; i <= k; i++)
    {
        if (a[i] != x[i])
            return false;
    }
    return true;
}

void sinh()
{
    int t = k;
    while (x[t] == n - k + t)
        t--;
    x[t]++;
    for (int i = t + 1; i <= k; i++)
        x[i] = x[i - 1] + 1;
}

void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    int dem = 1;
    for (int i = 1; i <= k; i++)
        x[i] = i;
    while (!check())
    {
        dem++;
        sinh();
    }
    cout << dem << endl;
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