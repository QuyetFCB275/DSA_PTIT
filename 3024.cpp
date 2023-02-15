#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)
typedef long long ll;

vector<pair<int, int>> vt;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        vt.clear();
        int n;
        cin >> n;
        for (int i=0; i<n; i++)
        {
            pair<int, int> p1;
            int s, f;
            cin >> s >> f;
            p1.first = s;
            p1.second = f;
            vt.push_back(p1);
        }
        sort(vt.begin(), vt.end(), cmp);
        int k = 0, dem = 1;
        for (int i=1; i<n; i++)
        {
            if (vt[i].first >= vt[k].second)
            {
                k = i;
                dem++;
            }
        }
        cout << dem << endl;
    }
    
}