// chèn f[i] = f[i-1] + x;

// i chẵn -> f[i/2] + 2 ? (z);

// i lẻ f[i/2 + 1] + z + y;

#include <bits/stdc++.h>

using namespace std;

int n, x, y, z;
int f[105];

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y >> z;
        f[0] = 0;
        f[1] = x;
        if (x < z)
        {
            f[2] = x + x;
        }
        else
        {
            f[2] = x + z;
        }
        for (int i = 3; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                f[i] = min(f[i - 1] + x, f[i / 2] + z);
            }
            else
            {
                f[i] = min(f[i - 1] + x, f[i / 2 + 1] + z + y);
            }
        }
        cout << f[n] << endl;
    }
}