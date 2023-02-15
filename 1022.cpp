#include <bits/stdc++.h>

using namespace std;

int x[100], a[100];
int n, k;

bool check()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != x[i])
            return false;
    }
    return true;
}

void sinh()
{
    int t = n;
    while (x[t - 1] > x[t] && t > 0)
        t--;
    int min = x[t - 1];
    int res = n;
    while (x[res] < min)
        res--;
    swap(x[res], x[t - 1]);
    int l = t, r = n;
    while (l < r)
        swap(x[l++], x[r--]);
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int k = 1;
    for (int i = 1; i <= n; i++)
        x[i] = i;
    while (!check())
    {
        k++;
        sinh();
    }
    cout << k << endl;
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