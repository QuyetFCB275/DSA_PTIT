#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    map<char, int> mp;
    mp['('] = mp[')'] = 0;
    mp['+'] = mp['-'] = 1;
    mp['*'] = mp['/'] = 2;
    mp['^'] = 5;
    while (t--)
    {
        string ans = "";
        stack<char> st;
        string s;
        cin >> s;
        for (auto x : s)
        {
            if (isalpha(x))
            {
                ans += x;
            }
            else if (x == '(')
                st.push(x);
            else if (x == ')')
            {
                while (st.top() != '(')
                {
                    ans += st.top();
                    st.pop();
                }
                    st.pop();
            }
            else
            {
                while (!st.empty() && mp[st.top()] >= mp[x])
                {
                    ans += st.top();
                    st.pop();
                }
                st.push(x);
            }
        }
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        cout << ans << endl;
    }
}