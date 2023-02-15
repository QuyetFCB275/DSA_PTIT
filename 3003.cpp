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
        ll n;
        cin >> n;
        ll a[n + 5];
        ll sum = 0, k = 1e9 + 7;
        For(i, 0, n) cin >> a[i];
        sort(a, a + n);
        For(i, 0, n)
        {
            sum += a[i] * i;
            sum %= k;
        }
        cout << sum << endl;
    }
}