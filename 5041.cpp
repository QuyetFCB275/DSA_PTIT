// f[i][j] số kí tự cần xóa để đoạn i - j đối xứng

// s[i] == s[j] f[i][j] = f[i+1][j-1]

// else f[i][j] = min(f[i+1][j], f[i][j-1]) + 1

#include <bits/stdc++.h>

using namespace std;

// a e b c b d a

void solve()
{
    string s;
    cin >> s;
    int l = s.size();
    int f[l + 1][l + 1];
    memset(f, 0, sizeof(f));
    for (int i = 0; i < l; i++)
        f[i][i] = 0;
    // for (int i = 0; i < l; i++)// vòng for này sẽ sai vì i phải chạy ngược i--, còn j chạy thuận j++
    for (int i = l - 2; i >= 0; i--)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (s[i] == s[j])
            {
                f[i][j] = f[i + 1][j - 1];
            }
            else
            {
                f[i][j] = min(f[i + 1][j], f[i][j - 1]) + 1;
            }
        }
    }
    cout << f[0][l - 1] << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}