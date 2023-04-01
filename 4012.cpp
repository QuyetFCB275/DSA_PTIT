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
        int m, n;
        cin >> m >> n;
        map<int, int> mp;
        for (int i = 0; i <= m + n - 2; i++)
            mp[i] = 0;
        int a[m], b[n];
        For(i, 0, m) cin >> a[i];
        For(i, 0, n) cin >> b[i];
        For(i, 0, m)
        {
            For(j, 0, n)
            {
                mp[i + j] += a[i] * b[j];
            }
        }
        for (int i = 0; i <= m + n - 2; i++)
            cout << mp[i] << " ";
        cout << endl;
    }
}