#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fibo[100];
int find(ll, ll);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << (char) (find(n, k) + 64) << endl;
    }
}

int find(ll n, ll k)
{
    ll x = pow(2, n - 1);
    if (k == x)
        return n;
    if (k < x)
        return find(n - 1, k);
    else
        return find(n - 1, k - x);
}