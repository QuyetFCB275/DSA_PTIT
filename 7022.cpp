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
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        stack<int> st;
        vector<int> v;
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && mp[st.top()] <= mp[a[i]])
            {
                st.pop();
            }
            if (st.empty())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(st.top());
            }
            st.push(a[i]);
        }
        reverse(v.begin(), v.end());
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
}