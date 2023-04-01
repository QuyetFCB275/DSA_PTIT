#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), vt(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack<int> st;
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= a[i])
            {
                st.pop();
            }
            if (st.empty())
            {
                vt[i] = -1;
            }
            else
            {
                vt[i] = st.top();
            }
            st.push(a[i]);
        }
        for (auto x : vt)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}