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
            if (s[i] == ']' || isalpha(s[i]))
                st.push(s[i]);
            else if (isdigit(s[i]))
            {
                string k(1, s[i]);
                if (isdigit(s[i - 1]))
                {
                    i--;
                    k += s[i];
                }
                reverse(k.begin(), k.end());
                int a = stoi(k);

                string v;
                while (!st.empty() && st.top() != ']')
                {
                    v += st.top();
                    st.pop();
                }
                if (!st.empty())
                    st.pop();
                string res;
                while (a--)
                {
                    res += v;
                }
                for (int i = res.size() - 1; i >= 0; i--)
                    st.push(res[i]);
            }
        }
        while (!st.empty())
        {
            if (st.top() != ']')
                cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}