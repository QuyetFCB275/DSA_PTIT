#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long a[n + 5], chan[n + 5], le[n + 5];
    int dem1 = 0, dem2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
            chan[++dem1] = a[i];
        else
            le[++dem2] = a[i];
    }
    sort(chan + 1, chan + dem1 + 1, greater<>());
    sort(le + 1, le + dem2 + 1);
    dem1 = 0, dem2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            cout << le[++dem2] << " ";
        else
            cout << chan[++dem1] << " ";
    }
}