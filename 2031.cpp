#include <bits/stdc++.h>

using namespace std;

char c;
char x[100];
bool unused[200];
int n;

bool dk();
void Try(int);
void display();

int main()
{
    memset(unused, true, 200);
    cin >> c;
    n = c - 'A' + 1;
    Try(1);
}

void Try(int i)
{
    for (char j = 'A'; j <= c; j++)
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
    if (c == 'D')
    {
        if (x[1] != 'A' && x[n] != 'A')
            return false;
        return true;
    }
    else
    {
        if (x[1] == 'A' && x[n] == 'E' || x[1] == 'E' && x[n] == 'A')
            return true;
        for (int i = 1; i < n; i++)
        {
            if (x[i] == 'A' && x[i + 1] == 'E')
                return true;
        }
        for (int i = 1; i < n; i++)
        {
            if (x[i] == 'E' && x[i + 1] == 'A')
                return true;
        }
        return false;
    }
}

void display()
{
    for (int i = 1; i <= n; i++)
        cout << x[i];
    cout << endl;
}