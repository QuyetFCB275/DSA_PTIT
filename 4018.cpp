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
        int a[n + 5];
        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                res = i;
        }
        cout << res << endl;
    }
}