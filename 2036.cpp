#include <bits/stdc++.h>

using namespace std;

int a[100], n, sum;
vector<vector<int>> vt;
vector<int> van;
vector<string> v;

void Try(int i);

bool cmp(vector<int> a, vector<int> b)
{
    int maxx = max(a.size(), b.size());
    a.resize(maxx);
    b.resize(maxx);
    for (int i=0; i<maxx; i++)
    {
        if (a[i] < b[i])
            return true;
        if (a[i] > b[i])
            return false;
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        vt.clear();
        v.clear();
        van.clear();
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<int>());
        sum = 0;
        Try(0);
        sort(vt.begin(), vt.end(), cmp);
        for (auto x : vt)
        {
            for (auto i : x)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}

void Try(int k)
{
    for (int i = k; i < n; i++)
    {
        sum += a[i];
        van.push_back(a[i]);
        if (sum % 2 == 1)
            vt.push_back(van);
        Try(i + 1);
        sum -= a[i];
        van.pop_back();
    }
}