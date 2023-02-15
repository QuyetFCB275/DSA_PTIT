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
        vector<vector<int>> vt;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            vector<int> v1;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                    swap(a[i], a[j]);
            }
            for (int i = 0; i < n; i++)
                v1.push_back(a[i]);
            vt.push_back(v1);
            if (check(a, n))
                break;
        }

        int dem = vt.size();
        reverse(vt.begin(), vt.end());
        for (auto x : vt)
        {
            cout << "Buoc " << dem << ": ";
            for (auto a : x)
            {
                cout << a << " ";
            }
            cout << endl;
            dem--;
        }
    }
}