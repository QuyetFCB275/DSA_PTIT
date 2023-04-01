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
        int a[n], b[n] = {1};
        for (auto &i : a)
            cin >> i;
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            if (st.empty() || a[i] < a[st.top()])
            {
                st.push(i);
                b[i] = 1;
            }
            else
            {
                while (!st.empty() && a[i] >= a[st.top()])
                {
                    // b[i] = max(b[i], i - st.top() + 1);
                    b[i] = max(b[i], b[st.top()] + i - st.top());
                    st.pop();
                }
                st.push(i);
            }
        }
        for (auto x : b)
            cout << x << " ";
        cout << endl;
    }
}