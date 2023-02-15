#include <bits/stdc++.h>

using namespace std;

int n, k;
int x[100];

bool check()
{
    for (int i = 1; i <= k; i++)
    {
        if (x[i] != n - k + i)
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
        map<int, int> mp;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> x[i];
            mp[x[i]] = 1;
        }
        if (check())
        {
            cout << k << endl;
        }
        else
        {
            int t = k;
            while (x[t] == n - k + t)
                t--;
            x[t]++;
            for (int i = t + 1; i <= k; i++)
                x[i] = x[i - 1] + 1;
            for (int i = 1; i <= k; i++)
            {
                mp[x[i]] = 1;
            }
            cout << mp.size() - k << endl;
        }
    }
}