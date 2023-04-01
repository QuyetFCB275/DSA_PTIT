#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        stack<int> st;
        string s;
        cin >> s;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (isdigit(s[i]))
            {
                st.push(s[i] - '0');
            }
            else
            {
                int q1 = st.top();
                st.pop();
                int q2 = st.top();
                st.pop();
                int q;
                if (s[i] == '+')
                    q = q1 + q2;
                else if (s[i] == '-')
                    q = q1 - q2;
                else if (s[i] == '*')
                    q = q1 * q2;
                else if (s[i] == '/')
                    q = q1 / q2;
                st.push(q);
            }
        }
        cout << st.top() << endl;
    }
}