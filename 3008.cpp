#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pair<int, int> a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i].first;
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i].second;
        }
        sort(a + 1, a + n + 1, cmp);
        int k = a[1].second, sum = 1;
        for (int i=2; i<=n; i++)
        {
            if (a[i].first >= k)
            {
                sum ++;
                k = a[i].second;
            }
        }
        cout << sum << endl;
    }
}