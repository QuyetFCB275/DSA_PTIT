#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
                break;
            else
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[i] + a[j] >= k)
                        break;
                    else
                    {
                        ll q = k - a[i] - a[j];
                        int dem = lower_bound(a + j + 1, a + n, q) - a;
                        dem--;
                        sum += dem - j;
                    }
                }
            }
        }
        cout << sum << endl;
    }
}
// - 2 0 1 3