#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5] = {0};
        int L[n + 5] = {0}, R[n + 5] = {0};
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            L[i] = R[i] = a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[j] < a[i])
                {
                    L[i] = max(L[i], L[j] + a[i]);
                }
            }
        }

        for (int i = n; i >= 1; i--)
        {
            for (int j = n; j > i; j--)
            {
                if (a[j] < a[i])
                {
                    R[i] = max(R[i], R[j] + a[i]);
                }
            }
        }
        int max = 0;
        for (int i = 1; i <= n; i++)
        {
            if (max < L[i] + R[i] - a[i])
                max = L[i] + R[i] - a[i];
        }
        cout << max << endl;
    }
}