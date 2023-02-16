#include <bits/stdc++.h>

using namespace std;

int x[100], a[100][100];
int n = 8, maxx = 0;
bool xuoi[100], nguoc[100], doc[100];

void Try(int);
void fun();

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        maxx = 0;
        memset(xuoi, true, 100);
        memset(nguoc, true, 100);
        memset(doc, true, 100);
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
                cin >> a[i][j];
        }
        Try(1);
        cout << maxx << endl;
    }
}

void Try(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if (doc[j] && xuoi[i - j + n] && nguoc[i + j - 1])
        {
            x[i] = j;
            doc[j] = false;
            xuoi[i - j + n] = false;
            nguoc[i + j - 1] = false;
            if (i == 8)
            {
                fun();
            }
            else
                Try(i + 1);
            doc[j] = true;
            xuoi[i - j + n] = true;
            nguoc[i + j - 1] = true;
        }
    }
}

void fun()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i][x[i]];
    if (maxx < sum)
        maxx = sum;
}