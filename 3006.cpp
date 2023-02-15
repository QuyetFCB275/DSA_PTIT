#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int n;

bool check(int a[], int b[])
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i] && a[i] != b[n - i + 1])
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 5], b[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b + 1, b + n + 1);
        if (check(a, b))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}