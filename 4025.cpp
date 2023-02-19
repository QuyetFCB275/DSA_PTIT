#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll M = 1e9 + 7;
int t, n;
struct matrix
{
    ll a[2][2];

    matrix operator*(matrix b)
    {
        matrix res;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                res.a[i][j] = 0;
                for (int k = 0; k < 2; k++)
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
        cin >> n;
        test();
    }
}

void test()
{
    matrix q;
    q.a[0][0] = 1;
    q.a[0][1] = 1;
    q.a[1][0] = 1;
    q.a[1][1] = 0;

    matrix ans = powMod(q, n);
    cout << ans.a[0][1] << endl;
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