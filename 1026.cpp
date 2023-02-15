#include <bits/stdc++.h>

using namespace std;

int x[100];
int n, k;

void solve();
void init();
bool check();
bool dk();
void sinh();
void display();

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}

void solve()
{
    cin >> n;
    init();
    while (!check())
    {
        if (dk())
            display();
        sinh();
    }
    if (dk())
        display();
}

void init()
{
    for (int i = 1; i <= n; i++)
        x[i] = 6;
}

bool check()
{
    for (int i = 1; i <= n; i++)
    {
        if (x[i] != 8)
            return false;
    }
    return true;
}

bool dk()
{
    if (x[1] == 6 || x[n] == 8)
        return false;
    for (int i = 1; i < n; i++)
    {
        if (x[i] == 8 && x[i + 1] == 8)
            return false;
    }
    for (int i = 1; i < n - 2; i++)
    {
        if (x[i] == 6 && x[i + 1] == 6 && x[i + 2] == 6 && x[i + 3] == 6)
            return false;
    }
    return true;
}

void sinh()
{
    int t = n;
    while (x[t] == 8)
    {
        x[t] = 6;
        t--;
    }
    x[t] = 8;
}

void display()
{
    for (int i = 1; i <= n; i++)
    {
        cout << x[i];
    }
    cout << endl;
}