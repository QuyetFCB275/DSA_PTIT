#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> vt;
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
    {
        vector<int> v1;
        int res = i;
        for (int j = i + 1; j <= n; j++)
        {
            if (a[res] > a[j])
                res = j;
        }
        swap(a[i], a[res]);
        for (int i=1; i<=n; i++) v1.push_back(a[i]);
        vt.push_back(v1);
    }
    reverse(vt.begin(), vt.end());
    int dem = vt.size();
    for (auto x : vt)
    {
        cout << "Buoc " << dem << ": ";
        for (auto a : x)
            cout << a << " ";
        cout << endl;
        dem--;
    }
}