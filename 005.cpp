#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)
typedef long long ll;

int main ()
{
    int n;
    cin >> n;
    int a[n+5];
    for (int i=0; i<n; i++) cin >> a[i];
    int k; cin >> k;
    for (int i=0; i<n; i++)
    {
        if (a[i] != k) cout << a[i] << " ";
    }    
}