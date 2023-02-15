#include <bits/stdc++.h>

using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

bool check(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int a[n], dem = 1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
        display(a, n);
        if (check(a, n))
            break;
    }
}