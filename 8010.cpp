#include <bits/stdc++.h>

using namespace std;

#define ii pair<int, int>

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<ii> q;
        q.push({n, 0});
        map<int, bool> mp;
        while (1)
        {
            ii p = q.front();
            q.pop();
            if (p.first == 2)
            {
                cout << p.second + 1 << endl;
                break;
            }

            for (int i = 2; i <= sqrt(p.first); i++)
            {
                if (p.first % i == 0 && !mp[p.first / i])
                {
                    mp[p.first / i] = true;
                    q.push({p.first / i, p.second + 1});
                }
            }
            q.push({p.first - 1, p.second + 1});
        }
    }
}