#include <bits/stdc++.h>

using namespace std;

int n, k;
string s;
vector<string> ans;

void Try(int);
void solve();

int main()
{
    cin >> n >> k;
    s.resize(n);
    Try(0);
    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    for (auto x : ans)
        cout << x << endl;
}

void Try(int i)
{
    for (char j = 'A'; j <= 'B'; j++)
    {
        s[i] = j;
        if (i == n - 1)
            solve();
        else
            Try(i + 1);
    }
}

void solve()
{
    string q = string(k, 'A');
    int pos = s.find(q, 0);
    if (pos != -1)
    {
        // cout << "VAN";
        string s1 = s.substr(pos + 1);
        if (s1.find(q) == string::npos)
            ans.push_back(s);
    }
}