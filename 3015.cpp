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
        int n, s, m;
        cin >> n >> s >> m;
        if (n < m) //|| (n == m && s >= 7))
        {
            cout << -1 << endl;
        }
        else
        {
            int du = (n - m) * 6;
            if (du < m && s >= 7)
            {
                cout << -1 << endl;
            }
            else
            {
                int ans;
                if (s * m % n == 0)
                    ans = s * m / n;
                else
                    ans = s * m / n + 1;
                cout << ans << endl;
            }
        }
    }
}