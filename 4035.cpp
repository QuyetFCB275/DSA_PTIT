#include <bits/stdc++.h>

using namespace std;
int M = 1e9 + 7;

long long powMod(long n, long k)
{
    if (k == 0)
        return 1;
    long long x = powMod(n, k / 2);
    if (k % 2 == 0)
        return x * x % M;
    return n * (x * x % M) % M;
}

int main()
{
    long long n, k;
    cin >> n >> k;
    while (n != 0 || k != 0)
    {
        cout << powMod(n, k) << endl;
        cin >> n >> k;
    }
}