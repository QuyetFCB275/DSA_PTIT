#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n+5];
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n, greater<int>());
        int i=0;
        while (k--)
        {
            cout << a[i++] << " ";
        }
        cout << endl;
    }
}