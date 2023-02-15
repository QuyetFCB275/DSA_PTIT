#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n+5];
        for (int i=1; i<=n; i++) cin >> a[i];
        ll max = -5;
        for (int i=1; i <= k; i++)
        {
            if (a[i] > max) max = a[i];
        }
        cout << max << " ";
        for (int i = k+1; i<=n; i++)
        {
            if (a[i-k] != max)
            {
                if (max < a[i])
                    max = a[i];
                    
            }
        }
    }
}