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
        int sum = 0, sum1 = 0;
        For(i, 0, n)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        if (k > n - k)
            k = n - k;
        for (int i = 0; i < k; i++)
            sum1 += a[i];
        cout << sum - 2 * sum1 << endl;
    }
}