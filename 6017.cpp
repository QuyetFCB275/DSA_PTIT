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
        int n, m;
        cin >> n >> m;
        multiset<ll> se;
        int k = n + m;
        while (k--)
        {
            ll x;
            cin >> x;
            se.insert(x);
        }
        for (auto x : se) cout << x << " ";
        cout << endl;
    }    
}