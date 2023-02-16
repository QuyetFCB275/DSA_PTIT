#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fibo[100];
char find(ll n, ll i);

int main ()
{
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i=3; i<=99; i++)
        fibo[i] = fibo[i-2] + fibo[i-1];
    int t;
    cin >> t;
    while(t--)
    {
        ll n, i;
        cin >> n >> i;
        cout << find(n, i) << endl;
    }    
}

char find(ll n, ll i)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    if (i <= fibo[n-2])
        return find(n-2, i);
    else if (i > fibo[n-2])
        return find(n-1, i - fibo[n-2]);
}