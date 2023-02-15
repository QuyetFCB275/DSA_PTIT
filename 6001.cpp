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
        int n;
        cin >> n;
        int a[n+5];
        For(i, 0, n) cin >> a[i];
        sort(a, a+n);
        int l=0, r = n-1;
        while(l < r)
        {
            cout << a[r--] << " " << a[l++] << " ";
        }
        if (l == r) cout << a[r];
        cout << endl;
    }
        
}