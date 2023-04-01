// f[i][j] là độ dài xâu con dài nhất tính từ i - j
#include <bits/stdc++.h>

using namespace std;

bool f[1005][1005];

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        memset(f, false, sizeof(f));
        string s;
        cin >> s;
        int l = s.size();
        for (int i = 0; i < l; i++)
            f[i][i] = true;
        int ans = 1;
        for (int len = 2; len <= l; len++)
        {
            for (int i = 0; i < l; i++)
            {
                int j = i + len - 1;
                if (s[i] == s[j] && len == 2)
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