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
        int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        vector<int> vt;
        for (int i : a)
            vt.push_back(i);
        reverse(vt.begin(), vt.end());
        ll n, sum = 0;
        cin >> n;
        for (auto x : vt)
        {
            if (n >= x)
            {
                int k = n / x;
                sum += k;
                n -= k * x;
            }
            if (n == 0)
                break;
        }
        cout << sum << endl;
    }
}