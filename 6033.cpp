// 1 2 3 8 10 30 33 34 80
// 9 5 4 2 3  7  8  1  6
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
        pair<int, int> a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a, a + n);
        int ans = -1, k = a[0].first, Min = a[0].second;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first > k)
            {
                ans = max(ans, a[i].second - Min);
            }
            if (Min > a[i].second)
            {
                Min = a[i].second;
                k = a[i].first;
            }
        }
        cout << ans << endl;
    }
}