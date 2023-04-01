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
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
            {
                st.push(string(1, s[i]));
            }
            else
            {
                string q2 = st.top();
                st.pop();
                string q1 = st.top();
                st.pop();
                string q = s[i] + q1 + q2;
                st.push(q);
            }
        }
        cout << st.top() << endl;
    }
}