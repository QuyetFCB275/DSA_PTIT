#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll sum;

void solve()
{
    sum = 0;
    string s;
    cin >> s;

    vector<ll> v1, v2;
    for (int i = 0; i < s.size(); i++)
    {
        int k = s[i] - '0';
        sum += k;
        v2.push_back(k);
        for (auto x : v1)
        {
            ll q = x * 10 + k;
            sum += q;
            v2.push_back(q);
        }
        swap(v1, v2);
        v2.clear();
    }
    cout << sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}