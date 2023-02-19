#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

ll M = 123456789;
ll n;

ll powMod(ll a, ll n)
{
    if (n == 0)
        return 1;
    ll x = powMod(a, n / 2);
    if (n % 2 == 1)
        return a * (x * x % M) % M;
    else
        return x * x % M;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << powMod(2, n - 1) << endl;
    }
}