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
        int n, x, ans;
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
        {
            int k;
            cin >> k;
            if (x == k)
                ans = i;
        }
        cout << ans << endl;
    }
}