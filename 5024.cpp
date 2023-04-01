#include <bits/stdc++.h>

using namespace std;

int M = 1e9 + 7;
int f[100005];

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        memset(f, 0, sizeof(f));
        f[0] = 1;
        int n, k;
        cin >> n >> k;
        int a[n];
        for (auto &i : a)
            cin >> i;
        // sort(a, a + n);
        for (int i = 1; i <= k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] <= i)
                {
                    f[i] = (f[i] + f[i - a[j]]) % M;
                }
                // else
                // {
                //     break;
                // }
            }
        }
        cout << f[k] << endl;
    }
}