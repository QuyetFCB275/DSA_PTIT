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
        int a[n + 5], b[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b + 1, b + n + 1);
        int min = b[1];
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == min)
            {
                cout << i - 1 << endl;
                break;
            }
        }
    }
}