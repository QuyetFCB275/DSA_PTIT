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
        vector<int> vt;
        int a[200], dem = 0;
        while (n--)
        {
            int x;
            cin >> x;
            if (x != 0)
                vt.push_back(x);
        }
        sort(vt.begin(), vt.end(), greater<>());
        for (auto x : vt)
        {
            a[++dem] = x;
        }
        ll sum = 0, k = 1;
        for (int i = 1; i <= dem; i++)
        {
            if (i != 1 && i % 2 == 1)
                k *= 10;
            sum += a[i] * k;
        }
        cout << sum << endl;
    }
}