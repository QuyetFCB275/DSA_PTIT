#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)
typedef long long ll;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n+5], b[n+5];
        for (int i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        for (int i=1; i<n; i++)
        {
            cin >> b[i];
        }
        for (int i=1; i<=n; i++)
        {
            if (a[i] != b[i])
            {
                cout << i << endl;
                break;
            }
        }
    }
        
}