#include <bits/stdc++.h>

using namespace std;

int n;
int x[100];

void init();
int checkFinal();
void nextgen();
void display();
bool dk1();
bool dk2();

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
            if (dk1() && dk2())
                display();
            nextgen();
        }
        if (dk1() && dk2())
            display();
    }
}

void init()
{
    for (int i = 1; i <= n; i++)
        x[i] = 0;
}

int checkFinal()

{
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 0)
            return 0;
    }
    return 1;
}

void nextgen()
{
    int i = n;
    while (x[i] == 1)
    {
        x[i] = 0;
        i--;
    }
    x[i] = 1;
}

void display()
{
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 0)
            cout << 'A';
        else
            cout << 'H';
    }
    cout << endl;
}

bool dk1()
{
    if (x[1] != 1 || x[n] != 0)
        return false;
    return true;
}

bool dk2()
{
    for (int i = 1; i < n; i++)
    {
        if (x[i] == 1 && x[i + 1] == 1)
            return false;
    }
    return true;
}