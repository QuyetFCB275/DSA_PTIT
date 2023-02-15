#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<int>> vt;
    for (int i = 0; i < n; i++)
    {
        vector<int> v1;
        int j = i;
        while (j > 0 && a[j] < a[j - 1])
        {
            swap(a[j], a[j - 1]);
            j--;
        }
        for (int j = 0; j <= i; j++)
            v1.push_back(a[j]);
        vt.push_back(v1);
    }
    int dem = vt.size() - 1;
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