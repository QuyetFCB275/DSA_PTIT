#include <bits/stdc++.h>

using namespace std;

typedef pair<string, int> si;
// #define ii pair<int, int>

bool check(string s)
{
    int k = stoi(s);
    for (int i = 2; i <= sqrt(k); i++)
    {
        if (k % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        map<string, int> mp;
        queue<si> q;
        string s, t;
        cin >> s >> t;
        mp[s] = 1;
        q.push({s, 0});
        while (1)
        {
            si v = q.front();
            if (v.first == t)
            {
                cout << v.second << endl;
                break;
            }
            q.pop();
            for (int i = 0; i <= 3; i++)
            {
                for (int j = 0; j <= 9; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    string s = v.first;
                    s[i] = j + '0';
                    if (check(s) && mp[s] == 0)
                    {
                        q.push({s, v.second + 1});
                        mp[s] = 1;
                    }
                }
            }
        }
    }
}