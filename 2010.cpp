#include <bits/stdc++.h>

using namespace std;

int q[100], a[100];
void in(int);
void Try(int, int);
int n, x, kt;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        kt = 0;
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        Try(1, 0);
        if (!kt)
            cout << -1;
        cout << endl;
    }
}

void Try(int i, int s)
{
    for (int j = 1; j <= n; j++)
    {
        if (a[j] >= q[i - 1] && s + a[j] <= x)
        {
            q[i] = a[j];
            s += a[j];
            if (s == x)
            {
                in(i);
                kt = 1;
            }
            else
                Try(i + 1, s);
            s -= a[j];
        }
    }
}

void in(int n)
{
    cout << "[";
    for (int i = 1; i <= n; i++)
    {
        cout << q[i];
        if (i != n)
            cout << " ";
    }
    cout << "]";
}