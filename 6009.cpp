#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum = 0;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            int l, r, x = k - a[i];
            l = lower_bound(a + i + 1, a + n, x) - a;
            r = upper_bound(a + i + 1, a + n, x) - a;
            sum += r - l;
        }
        cout << sum << endl;
    }
}