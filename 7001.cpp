#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    string s;
    while (cin >> s)
    {
        if (s == "push")
        {
            int n;
            cin >> n;
            st.push(n);
        }
        else if (s == "pop")
        {
            st.pop();
        }
        else
        {
            vector<int> vt;
            stack<int> s = st;
            while (!s.empty())
            {
                vt.push_back(s.top());
                s.pop();
            }
            reverse(vt.begin(), vt.end());
            for (auto x : vt)
                cout << x << " ";
            cout << endl;
        }
        if (st.empty())
        {
            cout << "empty";
            break;
        }
    }
}