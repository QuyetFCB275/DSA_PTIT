#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        vector<bool> f(1000000, false);
        f[0] = true;

        vector<int> vt(1);

        for (int i = 0; i < n; i++)
        {
            for (int j = s; j >= a[i]; j--)
            {
                if (f[j - a[i]])
                {
                    f[j] = true;
                }
            }
        }
        if (f[s])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}