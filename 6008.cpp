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
        int a[n], b[m], a1[6] = {0}, b1[6] = {0};
        for (auto &i : a)
        {
            cin >> i;
            if (i < 6)
                a1[i]++;
        }
        for (auto &i : b)
        {
            cin >> i;
            if (i < 6)
                b1[i]++;
        }
        sort(b, b + m);
        long long dem = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                continue;
            }
            else if (a[i] == 1)
            {
                dem += b1[0];
            }
            else
            {
                int k = upper_bound(b, b + m, a[i]) - b;
                dem += m - k;
                dem += b1[0] + b1[1];
                if (a[i] == 2)
                    dem = dem - b1[3] - b1[4];
                if (a[i] == 3)
                    dem += b1[2];
            }
        }
        cout << dem << endl;
    }
}