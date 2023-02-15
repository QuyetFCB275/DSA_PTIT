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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
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
        b[i] = x[i];
}

bool check()
{
    if (n == 1)
        return true;
    return false;
}

void sinh()
{
    n--;
    for (int i = 1; i <= n; i++)
        x[i] = b[i] + b[i + 1];
    init();
}

void display()
{
    cout << "[";
    for (int i = 1; i < n; i++)
    {
        cout << x[i] << " ";
    }
    cout << x[n] << "]";
    cout << endl;
}