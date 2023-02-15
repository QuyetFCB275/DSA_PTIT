#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int n, k, sum, q;
int a[100], b[100], x[100];

void display(int);
void Try(int, int, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sum = 0, q = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        Try(1, 0, 1);
        if (!q)
            cout << -1;
        cout << endl;
    }
}

void Try(int i, int sum, int idx)
{
    for (int j = idx; j <= n; j++)
    {
        if (sum + a[j] <= k)
        {
            x[i] = a[j];
            sum += a[j];
            if (sum == k)
            {
                display(i);
                q ++;
            }
            else
            {
                Try(i + 1, sum, j + 1);
            }
            sum -= a[j];
        }
    }
}

void display(int n)
{
    cout << "[";
    for (int i = 1; i < n; i++)
        cout << x[i] << " ";
    cout << x[n] << "] ";
}