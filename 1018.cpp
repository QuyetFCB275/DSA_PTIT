#include <bits/stdc++.h>

using namespace std;

int t, n, k;
int x[1005];

bool check()
{
    for (int i = 1; i <= k; i++)
    {
        if (x[i] != i)
            return false;
    }
    return true;
}

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            cin >> x[i];
        if (check())
        {
            for (int i = n - k + 1; i <= n; i++)
                cout << i << " ";
        }
        else
        {
            int t = k;
            while (x[t] == x[t - 1] + 1 && t > 1)
                t--;
            x[t]--;
            for (int i = t + 1; i <= k; i++)
            {
                x[i] = n - k + i;
            }
            for (int i = 1; i <= k; i++)
                cout << x[i] << " ";
        }
        cout << endl;
    }
}