#include <bits/stdc++.h>

using namespace std;

int a[20][20];
int x[20];
int sum, n, k;
bool unused[20];
vector<vector<int>> vt;

bool dk()
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        cnt += a[i][x[i]];
    if (cnt == k)
        return true;
    return false;
}

void fun()
{
    sum++;
    vector<int> v1;
    for (int i = 1; i <= n; i++)
        v1.push_back(x[i]);
    vt.push_back(v1);
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (unused[j])
        {
            x[i] = j;
            unused[j] = false;
            if (i == n && dk())
            {
                fun();
            }
            else
                Try(i + 1);
            unused[j] = true;
        }
    }
}

int main()
{
    sum = 0;
    memset(unused, true, 20);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    Try(1);
    cout << sum << endl;
    for (auto x : vt)
    {
        for (auto i : x)
            cout << i << " ";
        cout << endl;
    }
}