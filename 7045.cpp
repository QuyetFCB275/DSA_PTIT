#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, ans;
    cin >> s;
    stack<char> st;
    for (auto x : s)
    {
        if (x == '<' )
        {
            if (!ans.empty()) {
				st.push(ans.back());
				ans.pop_back();
			}
        }
        else if (x == '>')
        {
            if (!st.empty())
            {
                ans += st.top();
                st.pop();
            }
        }
        else if (x == '-')
        {
            if (!ans.empty()) ans.pop_back();
        }
        else ans += x;
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout << ans;
}