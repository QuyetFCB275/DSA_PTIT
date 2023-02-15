#include <bits/stdc++.h>

using namespace std;

void display(int a[], int n)
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
    {
        cout << "Buoc " << i << ": ";
        int res = i;
        for (int j = i + 1; j <= n; j++)
        {
            if (a[res] > a[j])
                res = j;
        }
        swap(a[i], a[res]);
        display(a, n);
    }
}