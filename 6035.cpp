// 12 4 78 90 45 23
// 1  1  2  3  1  1
// 2  1  1  3  2  1
#include <bits/stdc++.h>

using namespace std;

void test()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int L[n + 5] = {0}, R[n + 5] = {0};

    for (int i = 1; i <= n; i++)
    {
        if (a[i] > a[i - 1])
            L[i] = L[i - 1] + 1;
        else
            L[i] = 1;
    }

    for (int i = n; i >= 1; i--)
    {
        if (a[i] > a[i + 1])
            R[i] = R[i + 1] + 1;
        else
            R[i] = 1;
    }
    int maxx = 0;
    for (int i = 1; i <= n; i++)
    {
        maxx = max(maxx, L[i] + R[i] - 1);
    }
    cout << maxx << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        test();
    }
}