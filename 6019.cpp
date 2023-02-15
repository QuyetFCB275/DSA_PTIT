#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second > p2.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        vector<pair<int, int>> vt;
        while (n--)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for (auto x : mp)
        {
            vt.push_back(x);
        }
        sort(vt.begin(), vt.end(), cmp);
        for (auto x : vt)
        {
            int t = x.second;
            while (t--)
            {
                cout << x.first << " ";
            }
        }
        cout << endl;
    }
}