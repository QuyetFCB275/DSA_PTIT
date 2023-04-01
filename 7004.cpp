#include <bits/stdc++.h>

using namespace std;

bool check(stack<char> st)
{
    int dem1 = 0, dem2 = 0;
    while (!st.empty())
    {
        if (st.top() == '(')
            dem1++;
        else
            dem2++;
        st.pop();
    }
    if (dem1 % 2 == 0 && dem2 % 2 == 0)
        return true;
    return false;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (char x : s)
        {
            if (!st.empty() && st.top() == '(' && x == ')')
            {
                st.pop();
            }
            else
                st.push(x);
        }
        if (st.empty())
            cout << 0 << endl;
        else
        {
            if (check(st))
            {
                cout << st.size() / 2 << endl;
            }
            else
                cout << st.size() / 2 + 1 << endl;
        }
    }
}