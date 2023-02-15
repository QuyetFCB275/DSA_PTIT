#include <bits/stdc++.h>

using namespace std;

int x[100];
int n, k;

void solve();
void init();
bool check();
void sinh();
void display();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

void solve()
{
    cin >> n >> k;
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
        cout << char (x[i] + 64);
    }
    cout << endl;
}