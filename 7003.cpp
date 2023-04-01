#include <bits/stdc++.h>

using namespace std;

string s;

bool check()
{
    stack<char> st;
    for (char x : s)
    {
        if (x != ')')
            st.push(x);
        else
        {
            bool dk = false;
            while (!st.empty() && st.top() != '(')
            {
                if (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                    dk = true;
                st.pop();
            }
            st.pop();
            if (!dk)
                return true;
        }
    }
    return false;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (check())
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}