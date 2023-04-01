#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll f[55];

int main()
{
    f[1] = 1;
    f[2] = 2;
    f[3] = 4;
    for (int i = 4; i < 55; i++)
        f[i] = f[i - 1] + f[i - 2] + f[i - 3];

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
}