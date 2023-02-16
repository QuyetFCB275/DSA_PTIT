#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, k;
int M = 1e9 + 7;

struct matrix
{
    ll a[100][100];

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
                }
                res.a[i][j] %= M;
            }
        }
        return res;
    }
};

matrix powMod(matrix ans, ll k)
{
    if (k == 1)
        return ans;
    matrix x = powMod(ans, k / 2);
    if (k % 2 == 1)
        return ans * x * x;
    else
        return x * x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        matrix ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> ans.a[i][j];
        }
        matrix barca = powMod(ans, k);
        ll nas = 0;
        for (int i = 0; i < n; i++)
        {
            nas += barca.a[i][n - 1];
            nas %= M;
        }
        cout << nas << endl;
    }
}