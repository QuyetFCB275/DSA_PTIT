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
        int n;
        cin >> n;
        map<ll, ll> mp;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] > 1)
            {
                cout << a[i];
                k = 1;
                break;
            }
        }
        if (!k)
            cout << "NO";
        cout << endl;
    }
}