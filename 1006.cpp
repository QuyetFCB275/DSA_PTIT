#include <bits/stdc++.h>

using namespace std;

int n;
int x[100];

void init();
int checkFinal();
void nextgen();
void display();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        init();
        while (!checkFinal())
        {
            display();
            nextgen();
        }
        display();
        cout << endl;
    }
}

void init()
{
    for (int i = 1; i <= n; i++)
        x[i] = n + 1 - i;
}

int checkFinal()

{
    for (int i = 1; i < n; i++)
    {
        if (x[i] > x[i + 1])
            return 0;
    }
    return 1;
}

void nextgen()
{
    int t = n;
    while (x[t - 1] < x[t] && t > 0)
        t--;
    int max = x[t-1];
    int res = n;
    while(x[res] > max) res--;
    swap(x[res], x[t-1]);
    int l = t, r = n;
    while(l < r) swap(x[l++], x[r--]);
}

void display()
{
    for (int i = 1; i <= n; i++)
    {
        cout << x[i];
    }
    cout << " ";
}