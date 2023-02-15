#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)
typedef long long ll;

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i=0; i<n; i++) cin >> a[i];
        ll min = 1e10;
        sort(a, a+n);
        for (int i=1; i<n; i++)
        {
            if (min > a[i] - a[i-1])
                min = a[i] - a[i-1];
        }
        cout << min << endl;
    }    
}