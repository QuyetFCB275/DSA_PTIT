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
        for (auto x : s)
        {
            if (!st.empty() && st.top() == '(' && x == ')')
                st.pop();
            else
            {
                st.push(x);
            }
        }
        cout << s.size() - st.size() << endl;
    }
}