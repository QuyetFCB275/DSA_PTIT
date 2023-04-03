#include <bits/stdc++.h>

using namespace std;

int k;
string s;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> k >> s;
        map<char, int> mp;
        for (auto i : s)
            mp[i]++;
        priority_queue<int> pq;
        for (auto x : mp)
        {
            pq.push(x.second);
        }
        while (k--)
        {
            int v = pq.top();
            pq.pop();
            pq.push(v - 1);
        }
        long long sum = 0;
        while (!pq.empty())
        {
            sum += pow(pq.top(), 2);
            pq.pop();
        }
        cout << sum << endl;
    }
}