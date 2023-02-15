#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int x[100], b[100], a[100][100];
int n, n1, k;

void solve();
void init();
bool check();
void push();
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
    n1 = n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }

    init();
    while (!check())
    {
        push();
        sinh();
    }
    push();
    display();
    cout << endl;
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

void push()
{
    for (int i = 1; i <= n; i++)
    {
        a[n][i] = x[i];
    }
}

void display()
{
    FOR(i, 1, n1)
    {
        cout << "[";
        FOR(j, 1, i)
        {
            cout << a[i][j];
            if (a[i][j+1] != 0 ) cout << ' ';
        }
        // if (i >= n1 - 1) cout << ' ';
        cout << "] ";
    }
}