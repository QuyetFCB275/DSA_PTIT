#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll merge(ll a[], int l, int pi, int r)
{
    ll sum = 0;

    int i, j, k, dem;
    int n1 = pi - l + 1, n2 = r - pi;
    ll L[n1], R[n2];

    for (i = l; i <= pi; i++)
        L[i - l] = a[i];
    for (j = pi + 1; j <= r; j++)
        R[j - pi - 1] = a[j];

    i = j = 0;
    dem = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[dem++] = L[i];
            i++;
        }
        else
        {
            a[dem++] = R[j];
            sum += (n1 - i);
            j++;
        }
    }

    while (i < n1)
    {
        a[dem++] = L[i];
        i++;
    }

    while (j < n2)
    {
        a[dem++] = R[j];
        j++;
    }

    return sum;
}

ll merge_sort(ll a[], int l, int r)
{
    ll ans = 0;
    if (l < r)
    {
        int pi = (l + r) / 2;
        ans += merge_sort(a, l, pi);
        ans += merge_sort(a, pi + 1, r);
        ans += merge(a, l, pi, r);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (auto &i : a)
            cin >> i;
        ll sum = merge_sort(a, 0, n - 1);
        cout << sum << endl;
    }
}