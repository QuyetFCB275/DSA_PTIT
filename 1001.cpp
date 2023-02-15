#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

bool ktra(string s)
{
    for (int i=0; i<s.size(); i++)
    {
        if (s[i] == '0') return false;
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;
    if (ktra(s))
    {
        for (int i = 1; i <= s.size(); i++)
            cout << 0;
    }
    else
    {
        int i = s.size() - 1;
        while (s[i] == '1')
        {
            s[i] = '0';
            i--;
        }
        s[i] = '1';
        cout << s << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}