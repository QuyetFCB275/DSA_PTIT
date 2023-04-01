#include <bits/stdc++.h>

using namespace std;

int n, x[100];
vector<vector<int>> vt;
int sum;

void display(int t)
{
    sum++;
    vector<int> v1;
    for (int i = 1; i <= t; i++)
        v1.push_back(x[i]);
    vt.push_back(v1);
}

void Try(int i, int sum)
{
    for (int j = min(x[i - 1], n - sum); j >= 1; j--)
    {
        x[i] = j;
        sum += x[i];
        if (sum == n)
        {
            display(i);
        }
        else
            Try(i + 1, sum);
        sum -= x[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sum = 0;
        vt.clear();
        cin >> n;
        x[0] = n;
        Try(1, 0);
        cout << sum << endl;
        for (auto x : vt)
        {
            cout << "(";
            for (int i = 0; i < x.size() - 1; i++)
                cout << x[i] << " ";
            cout << x[x.size() - 1] << ") ";
        }
        cout << endl;
    }
}