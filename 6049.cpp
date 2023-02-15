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
        int a[n];
        for (auto &i : a)
            cin >> i;
        long sum = 0;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            int y = a[i] + k;
            int idx = lower_bound(a + i + 1, a + n, y) - a;
            sum += idx - 1 - i;
        }
        cout << sum << endl;
    }
}