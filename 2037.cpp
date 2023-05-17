#include <bits/stdc++.h>

using namespace std;

int a[20], n;
vector<vector<int>> v;
vector<int> vt;

bool check(int n);
void Try(int i, int sum);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        v.clear();
        vt.clear();

        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + 1 + n, greater<int>());
        Try(1, 0);
        sort(v.begin(), v.end());
        for (auto x : v)
        {
            for (auto i : x)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}

bool check(int n)
{
    if (n == 0 || n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void Try(int idx, int sum)
{
    if (check(sum))
    {
        v.push_back(vt);
    }

    for (int i = idx; i <= n; i++)
    {
        vt.push_back(a[i]);
        Try(i + 1, sum + a[i]);
        vt.pop_back();
    }
}