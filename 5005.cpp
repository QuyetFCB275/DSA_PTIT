#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[j] <= a[i])
                {
                    b[i] = max(b[i], b[j] + 1);
                }
            }
        }
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (max < b[i])
                max = b[i];
        }
        cout << n - max << endl;
    }
}