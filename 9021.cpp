#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> vt;
    int a[n + 5][n + 5];
    int i, j;
    for (i = 1; i <= n; i++)
    {
        vector<int> v1;
        for (j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j])
            {
                v1.push_back(j);
            }
        }
        vt.push_back(v1);
    }
    for (auto x : vt)
    {
        for (auto a : x)
            cout << a << " ";
        cout << endl;
    }
}