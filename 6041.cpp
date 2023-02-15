#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int max = 0, Max;
        for (auto x : mp)
        {
            if (max < x.second)
            {
                max = x.second;
                Max = x.first;
            }
        }
        if (max > n/2) cout << Max << endl;
        else cout << "NO\n";
    }    
}