#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i].first = x;
        a[i].second = i;
    }
    sort(a, a + n, cmp);
    int maxx=0, cnt=1;
    for (int i=1; i<n; i++)
    {
        if (a[i].second > a[i-1].second)
            cnt++;
        else
            cnt = 1;
        maxx = max(maxx, cnt);
    }
    cout << n - maxx;
}