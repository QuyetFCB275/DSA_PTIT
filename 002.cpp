#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int a[100], b[100];
int n, k, sum;

void init();
bool check();
void display();
void sinh();
bool ktra();

int main()
{
    cin >> n >> k;

    b[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    init();
    while (!check())
    {
        if (ktra())
        {
            display();
            sum++;
        }
        sinh();
    }
    if (ktra())
    {
        display();
        sum++;
    }
    cout << sum;
}

void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}

bool check()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
            return false;
    }
    return true;
}

bool ktra()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i] * b[i];
    if (sum == k)
        return true;
    return false;
}

void display()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
            cout << b[i] << " ";
    }
    cout << endl;
}

void sinh()
{
    int i = n;
    while (a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    a[i] = 1;
}