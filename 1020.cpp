#include <iostream>

using namespace std;

bool dk(string s)
{
    for (int i=0; i<s.size(); i++)
    {
        if (s[i] == '1') return false;
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;
    if (dk(s))
    {
        for (int i=0; i<s.size(); i++) cout << 1;
    }
    else
    {
        int t = s.size() - 1;
        while (s[t] == '0')
        {
            s[t] = '1';
            t--;
        }
        s[t] = '0';
        cout << s;
    }
    cout << endl;
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