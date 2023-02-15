#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int n, sum;
int cot[100], xuoi[100], nguoc[100], x[100];

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] && xuoi[i - j + n] && nguoc[i + j - 1])
        {
            x[i] = j;
            cot[j] = false;
            xuoi[i - j + n] = false;
            nguoc[i + j - 1] = false;
            if (i == n)
                sum++;
            else
                Try(i + 1);
            cot[j] = true;
            xuoi[i - j + n] = true;
            nguoc[i + j - 1] = true;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sum = 0;
        memset(cot, true, 100);
        memset(xuoi, true, 100);
        memset(nguoc, true, 100);
        cin >> n;
        Try(1);
        cout << sum << endl;
    }
}