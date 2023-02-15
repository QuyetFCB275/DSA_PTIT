#include <bits/stdc++.h>

using namespace std;

int n, sum;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;
        int a[n+5];
        for (int i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        for (int i=1; i<n; i++)
        {
            int idx = i;
            for (int j=i+1; j<=n; j++)
            {
                if (a[j] < a[idx]) idx = j;
            }
            if (idx != i)
            {
                swap(a[i], a[idx]);
                sum++;
            }
        }
        cout << sum << endl;
    }    
}