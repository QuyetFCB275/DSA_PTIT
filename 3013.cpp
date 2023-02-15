#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)
typedef long long ll;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }
        int max = 0;
        for (auto x : mp)
            if (max < x.second)
                max = x.second;
        int k = s.size() - max;
        if (k >= (max - 1) * (d - 1)) cout << 1 << endl;
        else cout << -1 << endl;
    }
        
}