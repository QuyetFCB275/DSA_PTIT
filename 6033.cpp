#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first == p2.first)
        return p1.second > p2.second;
    return p1.first < p2.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pair<int, int> a[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i].first = x;
            a[i].second = i;
        }
        sort(a, a + n, cmp);
        for (auto x : a)
            cout << x.first << " " << x.second << endl;
        cout << endl;
        int maxx = -1, cnt = -1, index = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i].second > a[i - 1].second)
            {
                cnt = a[i].second - a[index].second;
            }
            else
            {
                index = i;
            }
            maxx = max(maxx, cnt);
        }
        // cout << maxx << endl;
    }
}