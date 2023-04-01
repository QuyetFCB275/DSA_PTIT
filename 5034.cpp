#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll f[100000];
int M = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        f[0] = 1;
        f[1] = 1;
        for (int i = 2; i <= k; i++)
        {
            f[i] = (f[i - 1] * 2) % M;
        }
        for (int i = k + 1; i <= n; i++)
        {
            f[i] = (2 * f[i - 1] - f[i - k - 1] + M) % M;
        }
        cout << f[n] << endl;
    }
}