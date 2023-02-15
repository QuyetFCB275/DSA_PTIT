ảo zl
#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3, dem = 0;
        cin >> n1 >> n2 >> n3;
        ll a[n1], b[n2], c[n3], d[100000];
        map<ll, ll> mp1, mp2, mp3, mp4;
        For(i, 0, n1)
        {
            cin >> a[i];
            mp1[a[i]]++;
        }
        For(i, 0, n2)
        {
            cin >> b[i];
            mp2[b[i]]++;
        }
        For(i, 0, n3)
        {
            cin >> c[i];
            mp3[c[i]]++;
        }
        For (i, 0, n1)
        {
            if (mp2[a[i]] != 0 && mp3[a[i]] != 0)
            {
                dem++;
                cout << a[i] << " ";
                mp2[a[i]]--;
                mp3[a[i]]--;
            }
        }
        if (!dem) cout << "-1";
        cout << endl;
    }
}