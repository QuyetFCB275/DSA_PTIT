#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int x[100];
int n;

void init();
bool check();
void display();
void sinh();

int main()
{
    cin >> n;
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
        x[i] = 0;
}

bool check()
{
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 0)
            return false;
    }
    return true;
}

void display()
{
    for (int i = 1; i <= n; i++)
        cout << x[i] << " ";
    cout << endl;
}

void sinh()
{
    int k;
    if (n % 2 == 0) 
        k = n / 2;
    else k = n / 2 + 1;
    while (x[k] == 1)
        k--;
    x[k] = x[n + 1 - k] = 1;
    for (int i = k + 1; i < n + 1 - k; i++)
    {
        x[i] = 0;
    }
}