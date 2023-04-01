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
        for (auto x : s)
        {
            if (isalpha(x))
            {
                st.push(string(1, x));
            }
            else
            {
                string q2 = st.top();
                st.pop();
                string q1 = st.top();
                st.pop();
                string q = "(" + q1 + x + q2 + ")";
                st.push(q);
            }
        }
        cout << st.top() << endl;
    }
}