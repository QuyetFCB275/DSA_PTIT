#include <bits/stdc++.h>

using namespace std;

bool check(string s)
{
    if (s[0] == '0')
        return true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '3' && s[i + 1] == '0')
            return true;
    }
    return false;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (check(s))
        {
            cout << 0 << endl;
        }
        else
        {
            int l = s.size();
            int f[l + 5] = {0};
            vector<vector<char>> vt1, vt2;
            vector<char> v1;
            v1.push_back(s[0]);
            vt1.push_back(v1);
            for (int i = 1; i < s.size(); i++)
            {
                vt2 = vt1;
                vt1.clear();
                for (auto x : vt2)
                {
                    if (s[i] != '0')
                    {
                        x.push_back(s[i]);
                        vt1.push_back(x);
                    }
                }
                for (auto x : vt2)
                {
                    int q = s[i] - '0';
                    int l = x.size();
                    int k = (x[l - 1] - '0') * 10 + q;
                    if (k <= 26 && k >= 10)
                    {
                        x[l - 1] = k + '0';
                        vt1.push_back(x);
                    }
                }
            }
            cout << vt1.size() << endl;
        }
    }
}