#include <bits/stdc++.h>

using namespace std;

int a[20], n;
string s, res;
vector<string> v;

void Try(int i);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        v.clear();
        cin >> n >> s;
        res = "";
        Try(1);
        sort(v.begin(), v.end());
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

void Try(int idx)
{
    for (int i = idx; i <= n; i++)
    {
        res += s[i - 1];
        v.push_back(res);
        Try(i + 1);
        res.pop_back();
    }
}