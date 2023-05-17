#include <bits/stdc++.h>

using namespace std;

int a[20], n, k;
vector<vector<int>> v;
vector<int> vt;

void Try(int i, int dem);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        v.clear();
        vt.clear();

        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + 1 + n);
        Try(1, 0);
        sort(v.begin(), v.end());
        for (auto x : v)
        {
            for (auto i : x)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}

void Try(int idx, int dem)
{
    if (dem == k)
    {
        v.push_back(vt);
        return;
    }

    for (int i = idx; i <= n; i++)
    {
        vt.push_back(a[i]);
        Try(i + 1, dem + 1);
        vt.pop_back();
    }
}