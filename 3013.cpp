#include <bits/stdc++.h>

using namespace std;

vector<pair<char, int>> vt;
map<char, int> mp;
string s;
int d;
char kq[100005];

bool cmp(pair<char, int> p1, pair<char, int> p2)
{
    return p1.second > p2.second;
}

bool check()
{
    for (int i = 0; i < vt.size(); i++)
    {
        for (int j = 0; j < vt[i].second; j++)
        {
            if (i + j * d >= s.size())
                return false;
            kq[i + j * d] = vt[i].first;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> d;
        cin >> s;
        vt.clear();
        mp.clear();
        for (auto i : s)
        {
            mp[i]++;
        }
        for (auto x : mp)
        {
            vt.push_back(x);
        }
        sort(vt.begin(), vt.end(), cmp);
        if (check())
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}