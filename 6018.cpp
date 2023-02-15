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
        int n;
        cin >> n;
        int a[n];
        int min = 1e5, max = -1e5;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            if (a[i] > max)
                max = a[i];
            if (a[i] < min)
                min = a[i];
        }
        int cnt = 0;
        for (int i = min; i <= max; i++)
        {
            if (!mp[i])
                cnt++;
        }
        cout << cnt << endl;
    }
}