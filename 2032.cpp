#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

vector<vector<int>> vt;
void Try(int i, int s);
void update(int i);
void display();
int x[100], a[100];
int n, q;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vt.clear();
        cin >> n >> q;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        Try(1, 0);
        if (vt.size() == 0)
            cout << -1;
        else
            display();
        cout << endl;
    }
}

void Try(int i, int s)
{
    for (int j = 1; j <= n; j++)
    {
        if (a[j] >= x[i - 1] && s + a[j] <= q)
        {
            x[i] = a[j];
            s += a[j];
            if (s == q)
                update(i);
            else
                Try(i + 1, s);
            s -= a[j];
        }
    }
}

void update(int i)
{
    vector<int> v1;
    for (int j = 1; j <= i; j++)
        v1.push_back(x[j]);
    vt.push_back(v1);
}

void display()
{
    cout << vt.size() << " ";
    for (auto x : vt)
    {
        cout << "{";
        for (int i = 0; i < x.size(); i++)
        {
            cout << x[i];
            if (i != x.size() - 1)
                cout << " ";
        }
        cout << "} ";
    }
}