#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int n, m;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> se1, se2;
        cin >> n >> m;
        int a[n], b[m], dem = n;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            se1.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            se1.insert(b[i]);
            dem++;
            if (se1.size() < dem)
            {
                se2.insert(b[i]);
                dem--;
            }
        }

        for (auto x : se1)
            cout << x << " ";
        cout << endl;
        for (auto x : se2)
            cout << x << " ";
        cout << endl;
    }
}