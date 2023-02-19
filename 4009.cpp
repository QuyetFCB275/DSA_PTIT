#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll M = 1e9 + 7;
ll t, n, k;

struct matrix
{
    ll a[20][20];

    matrix operator*(matrix b)
    {
        matrix res;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                res.a[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res.a[i][j] += a[i][k] * b.a[k][j];
                    res.a[i][j] %= M;
                }
            }
        }
        return res;
    }
};

void test();
matrix powMod(matrix a, ll b);

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        test();
    }
}

void test()
{
    matrix q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ll x; cin >> x;
            q.a[i][j] = x;
        }
    }

    matrix ans = powMod(q, k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << ans.a[i][j] << " ";
        cout << endl;
    }
}

matrix powMod(matrix a, ll k)
{
    if (k == 1)
        return a;
    matrix x = powMod(a, k / 2);
    if (k % 2 == 1)
        return a * x * x;
    else
        return x * x;
}