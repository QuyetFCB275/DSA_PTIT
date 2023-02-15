#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int tinh(int n, long long k)
{
    long long x = pow(2, n - 1);
    if (k == x)
        return n;
    if (k < x)
        return tinh(n - 1, k);
    return tinh(n - 1, k - x);
}

int main()
{
    ll t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << tinh(n, k) << endl;
    }
}