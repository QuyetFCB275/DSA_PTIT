#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n + m + 5];
        for (int i = 1; i <= n + m; i++)
            cin >> a[i];
        sort(a + 1, a + n + m + 1);
        cout << a[k] << endl;
    }
}