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
        stack<string> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (isalpha(s[i]))
            {
                st.push(string(1, s[i]));
            }
            else
            {
                string q1 = st.top();
                st.pop();
                string q2 = st.top();
                st.pop();
                string q = q1 + q2 + s[i];
                st.push(q);
            }
        }
        cout << st.top() << endl;
    }
}