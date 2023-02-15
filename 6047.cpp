#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

ll a[100000], maxx, n;

bool check()
{
    for (int i = 1; i <= n - 2; i++)
    {
        if (a[i] >= sqrt(maxx))
            break;
        else
            for (int j = i + 1; j <= n - 1; j++)
            {
                if (a[j] >= sqrt(maxx))
                    break;
                else
                {
                    ll Messi = a[i] * a[i] + a[j] * a[j];
                    ll mateo = sqrt(Messi);

                    if (mateo * mateo == Messi && binary_search(a + j + 1, a + n + 1, mateo))
                        return true;
                }
            }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        maxx = a[n];
        maxx = maxx * maxx;
        if (check())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}