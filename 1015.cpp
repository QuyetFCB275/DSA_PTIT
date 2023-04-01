#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int n;
vector<ll> vt;

void solve()
{
    cin >> n;
    vt.clear();
    vt.push_back(9);
    int k = 0;
    while (!k)
    {
        for (auto x : vt)
        {
            if (x % n == 0)
            {
                cout << x << endl;
                return;
            }
        }
        vector<ll> v1 = vt;
        vt.clear();
        for (auto x : v1)
        {
            ll a1 = x * 10;
            vt.push_back(a1);
            ll a2 = x * 10 + 9;
            vt.push_back(a2);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}