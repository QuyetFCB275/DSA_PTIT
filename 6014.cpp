#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int main()
{
    bool a[1000000];
    memset(a, true, 1000000);
    for (int i = 2; i < 1000000; i++)
    {
        if (a[i])
        {
            for (int j = i * 2; j < 1000000; j += i)
                a[j] = false;
        }
    }
    a[0] = a[1] = false;
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        int k = 0;
        for (int i = 2; i <= n / 2; i++)
        {
            if (a[i] && a[n - i])
            {
                cout << i << " " << n - i << endl;
                k = 1;
                break;
            }
        }
        if (!k)
            cout << -1 << endl;
    }
}