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
        int a[n];
        For(i, 0, n) cin >> a[i];
        sort(a, a + n);
        for (int i : a)
            cout << i << " ";
        cout << endl;
    }
}