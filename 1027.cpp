#include <bits/stdc++.h>

using namespace std;

int x[100];
int n, k;
int b[100];

void solve();
void init();
bool check();
void sinh();
void display();

int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
}

void solve()
{
    set<int> se;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int s;
        cin >> s;
        se.insert(s);
    }

    int dem = 1;
    for (int x : se)
    {
        b[dem++] = x;
    }

    init();
    while (!check())
    {
        display();
        sinh();
    }
    display();
}

void init()
{
    for (int i = 1; i <= n; i++)
        x[i] = i;
}

bool check()
{
    for (int i = 1; i < n; i++)
    {
        if (x[i] < x[i + 1])
            return false;
    }
    return true;
}

void sinh()
{
    int t = n;
    while (x[t - 1] > x[t] && t > 0)
        t--;
    int min = x[t - 1];
    int res = n;
    while (x[res] < min)
        res--;
    swap(x[res], x[t - 1]);
    int l = t, r = n;
    while (l < r)
        swap(x[l++], x[r--]);
}

void display()
{
    for (int i = 1; i <= n; i++)
    {
        cout << b[x[i]] << " ";
    }
    cout << endl;
}