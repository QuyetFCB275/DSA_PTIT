#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

ll n, k;
vector<ll> vt;

bool check()
{
    for (int i = 0; i < n; i++)
    {
        if (vt[i] > k / 3)
            break;
        else
        {
            for (int j = i + 1; j < n; j++)
            {
                if (vt[i] + vt[j] > 2 * k / 3)
                    break;
                else
                {
                    // if (find(vt.begin() + j + 1, vt.end(), k - vt[i] - vt[j]) != vt.end())
                    if (binary_search(vt.begin() + j + 1, vt.end(), k - vt[i] - vt[j]))
                        return true;
                }
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
        cin >> n >> k;
        vt.clear();
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            vt.push_back(x);
        }
        sort(vt.begin(), vt.end());
        if (check())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}