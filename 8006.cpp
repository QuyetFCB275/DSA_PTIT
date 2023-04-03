#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<ll> q;
        q.push(9);
        while (!q.empty())
        {
            ll v = q.front();
            q.pop();
            if (v % n == 0)
            {
                cout << v << endl;
                break;
            }
            else
            {
                q.push(v * 10);
                q.push(v * 10 + 9);
            }
        }
    }
}