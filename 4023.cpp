#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

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
        sort(a, a + n);
        ll sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int y = a[i] + k;
            sum += lower_bound(a + i + 1, a + n, y) - a - i - 1;
        }
        cout << sum << endl;
    }
}