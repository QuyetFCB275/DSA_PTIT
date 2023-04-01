#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto x : s)
            mp[x]++;
        priority_queue<int> qe;
        for (auto x : mp)
            qe.push(x.second);

        while (k--)
        {
            int x = qe.top();
            qe.pop();
            qe.push(--x);
        }
        long long sum = 0;
        while (!qe.empty())
        {
            sum += pow(qe.top(), 2);
            qe.pop();
        }
        cout << sum << endl;
    }
}