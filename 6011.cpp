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
        int a[n + 5], b[n + 5][n + 5];
        int sum = 1e5;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (abs(a[i] + a[j]) < abs(sum))
                    sum = a[i] + a[j];
            }
        }
        cout << sum << endl;
    }
}