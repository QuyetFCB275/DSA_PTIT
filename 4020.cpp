#include <bits/stdc++.h>

using namespace std;

int n, k;

int find(int a[], int left, int right, int k)
{
    while (left <= right)
    {
        int mod = (left + right) / 2;
        if (a[mod] == k)
        {
            return mod;
        }
        else if (a[mod] < k)
        {
            left = mod + 1;
        }
        else right = mod - 1;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[100000];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a, a+n);
        int index = find(a, 1, n, k);
        if (index)
            cout << index << endl;
        else
            cout << "NO\n";
    }
}