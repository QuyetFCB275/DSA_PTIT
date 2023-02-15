#include <bits/stdc++.h>

using namespace std;

#define For(i, a, b) for (int i=a; i<b; i++)

int n, k;

bool cmp(int a, int b)
{
    return abs(a - k) < abs(b - k);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n];
        For(i, 0, n) cin >> a[i];
        stable_sort(a, a + n, cmp);
        for (int x : a)
            cout << x << " ";
        cout << endl;
    }
}