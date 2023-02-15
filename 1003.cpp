#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int x[100];
int n, k;

bool ktra()
{
    for (int i = 1; i < n; i++)
    {
        if (x[i] < x[i+1])
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
        for (int i = 1; i <= n; i++)
        {
            cin >> x[i];
        }
        if (ktra())
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
        }
        else
        {
            int t = n;
            while(x[t-1] > x[t] && t > 0) t--;
            int min = x[t-1];
            int res = n;
            while(x[res] < min) res--;
            swap(x[res], x[t-1]);
            int l = t, r = n;
            while(l < r) swap(x[l++], x[r--]);
            for (int i = 1; i <= n; i++)
                cout << x[i] << " ";
        }
        cout << endl;
    }
}