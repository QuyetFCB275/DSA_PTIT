// Ví dụ 2 slide 10
// Liệt kê xâu nhị phân có độ dài n

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
        if (x[i] == 0) cout << 'A';
        else cout << 'B';
    }
    cout << " ";
}