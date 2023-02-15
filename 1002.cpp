#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)
typedef long long ll;

int x[100];
int n, k;

bool ktra()
{
    for (int i = 1; i<=k; i++)
    {
        if (x[i] != n - k + i) return false;
    }
    return true;
}

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for (int i=1; i<=k; i++)
        {
            cin >> x[i];
        }
        if (ktra())
        {
            for (int i=1; i<=k; i++) cout << i << " ";
        }
        else
        {
            int i = k;
            while(x[i] == n - k + i) i--;
            x[i]++;
            for (int j = i + 1; j<=k; j++)
            {
                x[j] = x[i] + j - i;
            }
            for (int i=1; i<=k; i++) cout << x[i] << " ";
        }
        cout << endl;
    }    
}