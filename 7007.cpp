#include <bits/stdc++.h>

using namespace std;

string rutgon(string s)
{
    stack<char> st;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if ((s[i] == '-' || s[i] == '+') && s[i + 1] == '(')
        {
            st.pop();
            string ans(1, s[i]);
            if (s[i] == '+')
            {
                while (st.top() != ')')
                {
                    if (st.top() == '+')
                        ans += '+';
                    else if (st.top() == '-')
                        ans += '-';
                    else
                        ans += st.top();
                    st.pop();
                }
            }
            else if (s[i] == '-')
            {
                while (st.top() != ')')
                {
                    if (st.top() == '+')
                        ans += '-';
                    else if (st.top() == '-')
                        ans += '+';
                    else
                        ans += st.top();
                    st.pop();
                }
            }
            st.pop();
            for (int i = ans.size() - 1; i >= 0; i--)
                st.push(ans[i]);
        }
        else
            st.push(s[i]);
    }
    string res;
    while (!st.empty())
    {
        if (st.top() != '(' && st.top() != ')')
            res += st.top();
        st.pop();
    }
    return res;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (rutgon(s1) == rutgon(s2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}