// Ví dụ 2 slide 10
// Liệt kê xâu nhị phân có độ dài n

#include <bits/stdc++.h>

using namespace std;

int n, k;
int x[100];

void init();
int checkFinal();
void nextgen();
void display();
bool dk();

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
            if (dk())
                display();
            nextgen();
        }
        if (dk())
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

bool dk()
{
    int sum = 0;
    for (int i=1; i<=n; i++)
        if (x[i] == 1) sum++;
    if (sum == k) return true;
    return false;
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
        cout << x[i];
    }
    cout << endl;
}