#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        map<char, int> mp;
        string s;
        cin >> s;
        stack<char> st;
        stack<int> v;
        int k = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (!st.empty() && st.top() == '(' && s[i] == ')')
            {
                st.pop();
                v.pop();
            }
            else
            {
                st.push(s[i]);
                v.push(i);
            }
        }
        if (v.empty())
            cout << s.size() << endl;
        else
        {
            int res = s.size(), ans = 0;
            while (!v.empty())
            {
                ans = max(ans, res - v.top() - 1);
                res = v.top();
                v.pop();
            }
            ans = max(ans, res);
            cout << ans << endl;
        }
    }
}