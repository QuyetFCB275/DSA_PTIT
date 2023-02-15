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
        priority_queue<int, vector<int>, greater<int>> q;
        while (n--)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        ll sum = 0, cnt = 0, k = 0;
        while (q.size() > 1)
        {
            cnt += q.top();
            q.pop();
            cnt += q.top();
            q.pop();
            sum += cnt;
            q.push(cnt);
            cnt = 0;
        }
        cout << sum << endl;
    }
}