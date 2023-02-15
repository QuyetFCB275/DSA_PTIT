#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int n;
int a[100];
vector<int> vt;
vector<vector<int>> ans;
vector<string> v;

void Try(int);

int main()
{
    cin >> n;
    a[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(0);
    for (int i = 0; i < ans.size(); i++)
    {
        string k = "";
        for (int j = 0; j < ans[i].size(); j++)
        {
            k += to_string(ans[i][j]) + " ";
        }
        v.emplace_back(k);
    }
    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x << endl;
}

void Try(int pos)
{
    for (int i = pos + 1; i <= n; i++)
    {
        if (a[i] > a[pos])
        {
            vt.push_back(a[i]);
            if (vt.size() > 1)
                ans.push_back(vt);
            Try(i);
            vt.pop_back();
        }
    }
}