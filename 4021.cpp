#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fibo[100];
ll n, k;

char find(ll n, ll k);

int main()
{
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i = 3; i <= 95; i++)
        fibo[i] = fibo[i - 2] + fibo[i - 1];
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << find(n, k) << endl;
    }
}

char find(ll n, ll k)
{
    if (n == 1)
        return '0';
    if (n == 2)
        return '1';
    if (k <= fibo[n - 2])
        return find(n - 2, k);
    else
        return find(n - 1, k - fibo[n - 2]);
}