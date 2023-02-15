#include <bits/stdc++.h>

using namespace std;

int n, k;
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
        cin >> n >> k;
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
    for (int i = 1; i <= k; i++)
        x[i] = i;
}

int checkFinal()

{
    for (int i = 1; i <= k; i++)
    {
        if (x[i] != (n - k + i))
            return 0;
        return 1;
    }
}

void nextgen()
{
    int t = k;
    while (x[t] == (n - k + t))
        t--;
    x[t]++;
    for (int i = t + 1; i <= k; i++)
    {
        x[i] = x[i - 1] + 1;
    }
}

void display()
{
    for (int i = 1; i <= k; i++)
    {
        cout << x[i];
    }
    cout << " ";
}