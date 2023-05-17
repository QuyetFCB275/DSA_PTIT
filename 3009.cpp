#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> vt;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
    }
    return a.second > b.second;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        vt.clear();
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            vt.push_back({y, z});
        }
        sort(vt.begin(), vt.end(), cmp);
        int dem = 0, ans = 0;
        vector<bool> kt(1005, false);

        for (int i = 0; i < n; i++)
        {
            for (int j = vt[i].first; j >= 1; j--)
            {
                if (!kt[j])
                {
                    kt[j] = true;
                    dem++;
                    ans += vt[i].second;
                    break;
                }
            }
        }
        cout << dem << " " << ans << endl;
    }
}