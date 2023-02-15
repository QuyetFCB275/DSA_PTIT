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
        long n;
        cin >> n;
        long a[n];
        For(i, 0, n) cin >> a[i];
        sort(a, a+n);
        if (a[0] == a[n-1]) cout << -1 << endl;
        else
        {
            cout << a[0] << " " << a[1] << endl;
        }
    }
        
}