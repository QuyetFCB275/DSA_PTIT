#include <bits/stdc++.h>

using namespace std;

int x[100];
int n, k;
string b[100];

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
    set<string> se;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        se.insert(s);
    }
    n = se.size();
    int dem = 1;
    for (string x : se)
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
    for (int i = 1; i <= k; i++)
        x[i] = i;
}

bool check()
{
    for (int i = 1; i <= k; i++)
    {
        if (x[i] != n - k + i)
            return false;
    }
    return true;
}

void sinh()
{
    int t = k;
    while (x[t] == n - k + t)
        t--;
    x[t]++;
    for (int i = t + 1; i <= k; i++)
        x[i] = x[i - 1] + 1;
}

void display()
{
    for (int i = 1; i <= k; i++)
    {
        cout << b[x[i]] << " ";
    }
    cout << endl;
}