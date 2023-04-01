#include <bits/stdc++.h>

using namespace std;

int n, x[100];

void display(int t)
{
    cout << "(";
    for (int i=1; i<t; i++) cout << x[i] << " ";
    cout << x[t] << ") ";
}

void Try(int i, int sum)
{
    for (int j = min(x[i-1], n - sum); j >= 1; j--)
    {
        x[i] = j;
        sum += x[i];
        if (sum == n)
        {
            display(i);
        }
        else Try(i+1, sum);
        sum -= x[i];
        // x[i] = 0;
    }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        x[0] = n;
        Try(1, 0);
        cout << endl;
    }
        
}