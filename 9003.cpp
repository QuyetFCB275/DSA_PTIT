#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;
        vector<vector<int>> vt(v + 1);
        while (e--)
        {
            int a, b;
            cin >> a >> b;
            vt[a].push_back(b);
            // vt[b].push_back(a);
        }
        for (int i = 1; i <= v; i++)
        {
            cout << i << ": ";
            for (auto x : vt[i])
                cout << x << " ";
            cout << endl;
        }
    }
}