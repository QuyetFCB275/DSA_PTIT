#include <bits/stdc++.h>

using namespace std;

int l, r, n;
int a[100000];

bool dk1()
{
    for (int j = l + 1; j <= n; j++)
    {
        if (a[j] < a[l])
            return false;
    }
    return true;
}

bool dk2()
{
    for (int j = r - 1; j >= 1; j--)
    {
        if (a[j] > a[r])
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        l = 1, r = n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        while (dk1())
            l++;
        while (dk2())
            r--;
        cout << l << " " << r << endl;
    }
}