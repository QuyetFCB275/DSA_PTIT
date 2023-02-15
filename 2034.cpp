#include <bits/stdc++.h>

using namespace std;

int n;
int x[100];
bool unused[100];

void Try(int);
bool dk();
void display();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(unused, true, 100);
        cin >> n;
        Try(1);
    }
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (unused[j])
        {
            x[i] = j;
            unused[j] = false;
            if (i == n)
            {
                if (dk())
                    display();
            }
            else
                Try(i + 1);
            unused[j] = true;
        }
    }
}

bool dk()
{
    for (int i = 2; i <= n; i++)
    {
        if (abs(x[i] - x[i - 1]) == 1)
            return false;
    }
    return true;
}

void display()
{
    for (int i = 1; i <= n; i++)
        cout << x[i];
    cout << endl;
}