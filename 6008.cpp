#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m], a0[6] = {0}, b0[6] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 6)
                a0[a[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (b[i] < 6)
                b0[b[i]]++;
        }
        int dem = 0;
        sort(b, b + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                continue;
            }
            else if (a[i] == 1)
            {
                dem += b0[0];
            }
            else
            {
                int it = upper_bound(b, b + n, a[i]) - b;
                dem += m - it;
                dem += b0[0] + b0[1];
                if (a[i] == 2)
                {
                    dem = dem - b0[3] - b0[4];
                }
                if (a[i] == 3)
                {
                    dem += b0[2];
                }
            }
        }
        cout << dem << endl;
    }
    return 0;
}
