#include <bits/stdc++.h>

using namespace std;

int f[100005];

void init()
{
    f[1] = 0;
    for (int i = 2; i <= 100000; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            f[i] = min(f[i / 2], f[i / 3]) + 1;
        }
        else if (i % 2 == 0)
        {
            f[i] = min(f[i / 2], f[i - 1]) + 1;
        }
        else if (i % 3 == 0)
        {
            f[i] = min(f[i / 3], f[i - 1]) + 1;
        }
        else
        {
            f[i] = f[i - 1] + 1;
        }
    }
}

int main()
{
    init();
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
}