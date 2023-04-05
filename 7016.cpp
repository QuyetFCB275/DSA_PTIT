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
        stack<int> st;
        int i;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == 'D')
            {
                st.push(i + 1);
            }
            else
            {
                cout << i + 1;
                while (!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }
            }
        }
        st.push(i + 1);
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}