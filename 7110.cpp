#include <bits/stdc++.h>

using namespace std;

map<char, int> mp;
string s;

bool check()
{
    stack<char> st;
    for (auto x : s)
    {
        if (mp[x] == 1 || mp[x] == 2 || mp[x] == 3)
        {
            st.push(x);
        }
        else
        {
            if (!st.empty() && mp[x] + mp[st.top()] == 10)
                st.pop();
            else
                return false;
        }
    }
    if (st.empty())
        return true;
    return false;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        mp['('] = 1;
        mp[')'] = 9;
        mp['{'] = 2;
        mp['}'] = 8;
        mp['['] = 3;
        mp[']'] = 7;
        cin >> s;
        if (check())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}