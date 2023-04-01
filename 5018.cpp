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
        int l = s.size();
        bool f[l + 5][l + 5];
        for (int i = 0; i < l; i++)
            f[i][i] = true;
        int ans = 1;
        for (int len = 2; len <= l; len++)
        {
            for (int i = 0; i < l; i++)
            {
                int j = i + len - 1;
                if (len == 2 && s[i] == s[j])
                {
                    f[i][j] = true;
                }
                else
                {
                    f[i][j] = (s[i] == s[j] && f[i + 1][j - 1]);
                }
                if (f[i][j])
                {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        cout << ans << endl;
    }
}