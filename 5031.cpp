// f[i] sô hạng tử cần ít nhất
//     f[i] = min(f[i], f[i - j * j]);
// // j*j <= i

#include <bits/stdc++.h>

using namespace std;

int f[10005];

void init()
{
    for (int i = 1; i <= 10000; i++)
        f[i] = i;
    for (int i = 2; i <= 10000; i++)
    {
        for (int j = sqrt(i); j >= 1; j--)
        {
            f[i] = min(f[i], f[i - j * j] + 1);
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