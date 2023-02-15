#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
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
        int n;
        cin >> n;
        vector<vector<int>> vt;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (a[j] > a[j + 1])
                    swap(a[j], a[j + 1]);
            }
            vector<int> v1;
            for (int j = 0; j < n; j++)
                v1.push_back(a[j]);
            vt.push_back(v1);
            if (check(a, n)) break;
        }
        int dem = vt.size();
        reverse(vt.begin(), vt.end());
        for (auto x : vt)
        {
            cout << "Buoc " << dem << ": ";
            for (auto a : x)
                cout << a << " ";
            cout << endl;
            dem--;
        }
    }
}