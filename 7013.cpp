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
        for (auto x : s)
        {
            if (isdigit(x))
            {
                st.push(x - '0');
            }
            else
            {
                int q2 = st.top();
                st.pop();
                int q1 = st.top();
                st.pop();
                int q;
                if (x == '+')
                    q = q1 + q2;
                else if (x == '-')
                    q = q1 - q2;
                else if (x == '*')
                    q = q1 * q2;
                else if (x == '/')
                    q = q1 / q2;
                st.push(q);
            }
        }
        cout << st.top() << endl;
    }
}