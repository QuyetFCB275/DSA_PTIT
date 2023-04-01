#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)
typedef long long ll;

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k = -1;
        vector<pair<int, int>> vt;
        pair<int, int> p1;
        for (int j = 0; j <= n / 7; j++)
        {
            if ((n - 7 * j) % 4 == 0)
            {
                k = 0;
                p1.first = (n - 7 * j) / 4;
                p1.second = j;
                vt.push_back(p1);
            }
        }
        if (k) cout << k << endl;
        else
        {
            int max = 1e7, i = 0, j = 0;
            for (auto x : vt)
            {
                if (max > (x.first + x.second))
                {
                    i = x.first;
                    j = x.second;
                    max = (x.first + x.second);
                }
            }
            while(i--) cout << 4;
            while(j--) cout << 7;
            cout << endl;
        }
    }    
}