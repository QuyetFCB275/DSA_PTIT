#include <bits/stdc++.h>

using namespace std;

int n, sum, tmp;
int a[1000];
int x[1000];
bool k;

void Try(int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        k = sum = tmp = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 1)
        {
            cout << "NO";
        }
        else
        {
            sum /= 2;
            sort(a + 1, a + n + 1);
            Try(1);
            if (k)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }
}

void Try(int i)
{
    int k1 = 0;
    for (int j = i; j <= n; j++)
    {
        x[i] = a[j];
        tmp += x[i];
        if (tmp == sum)
        {
            k1 = 1;
            return;
        }
        else if (tmp > sum)
            return;
        else
            Try(i + 1);
        tmp -= x[i];
        if (k1)
            return;
    }
}