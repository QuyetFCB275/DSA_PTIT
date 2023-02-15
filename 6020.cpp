#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)
typedef long long ll;

int main ()
{
    int t;
    cin >> t;
    while ((t--))
    {
        int n, x;
        cin >> n >> x;
        map<int, int> mp;
        while(n--)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        if (mp[x]) cout << 1 << endl;
        else cout << -1 << endl;
    }
        
}