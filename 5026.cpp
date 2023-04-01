#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, n;
    cin >> c >> n;
    int a[n];
    for (auto &i : a)
        cin >> i;
    bool f[c + 1] = {false};
    f[0] = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = c; j >= a[i]; j--)
        {
            if (f[j - a[i]])
            {
                f[j] = true;
            }
        }
    }
    for (int j = c; j >= 0; j--)
    {
        if (f[j])
        {
            cout << j;
            break;
        }
    }
}