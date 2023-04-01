#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if ((s[i] == '-' || s[i] == '+') && !st.empty() && st.top() == '(')
            {
                string ans(1, s[i]);
                st.pop();
                if (s[i] == '+')
                {
                    while (st.top() != ')')
                    {
                        ans += st.top();
                        st.pop();
                    }
                    st.pop();
                }
                else
                {
                    while (st.top() != ')')
                    {
                        if (st.top() == '-')
                            ans += '+';
                        else if (st.top() == '+')
                            ans += '-';
                        else
                            ans += st.top();
                        st.pop();
                    }
                    st.pop();
                }
                for (int i = ans.size() - 1; i >= 0; i--)
                {
                    st.push(ans[i]);
                }
            }
            else
                st.push(s[i]);
        }
        while (!st.empty())
        {
            if (st.top() != '(' && st.top() != ')')
                cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}