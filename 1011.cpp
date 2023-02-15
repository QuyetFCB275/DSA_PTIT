#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

bool check(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] < s[i + 1])
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int test;
        string s;
        cin >> test >> s;
        cout << test << " ";
        if (check(s))
            cout << "BIGGEST" << endl;
        else
        {
            int t = s.size() - 2;
            while (s[t] >= s[t + 1] && t > 0)
                t--;
            char min = s[t];
            int res = s.size() - 1;
            while (s[res] <= min)
                res--;
            swap(s[res], s[t]);
            int l = t + 1, r = s.size() - 1;
            while (l < r)
                swap(s[l++], s[r--]);
            cout << s << endl;
        }
    }
}