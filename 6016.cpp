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
        int n, m;
        cin >> n >> m;
        ll a[n], b[m];
        For(i, 0, n) cin >> a[i];
        For(i, 0, m) cin >> b[i];

        sort(a, a + n);
        sort(b, b + m);
        cout << a[n - 1] * b[0] << endl;
    }
}