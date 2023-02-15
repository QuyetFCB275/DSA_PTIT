#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int a[n+5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll maxx = max(max(a[0] * a[1], a[n-2] * a[n-1]), max(a[n-3] * a[n-2] * a[n-1], a[0] * a[1] * a[n-1]));
    cout << maxx;
}