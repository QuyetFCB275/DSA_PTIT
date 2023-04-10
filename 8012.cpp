#include <bits/stdc++.h>

using namespace std;

vector<int> van;

bool check(string s, int i)
{
    if (s.find(to_string(i)) != string::npos)
        return false;
    return true;
}

int main()
{
    vector<string> v;
    int i;
    for (i = 1; i <= 5; i++)
    {
        v.push_back(to_string(i));
        van.push_back(i);
    }
    string s = v[0];
    while (s.size() <= 5)
    {
        vector<string> q;
        for (i = 0; i <= 5; i++)
        {
            for (auto x : v)
            {
                if (check(x, i))
                {
                    string a = x + to_string(i);
                    q.push_back(a);
                    van.push_back(stoi(a));
                }
            }
        }
        swap(v, q);
        s = v[0];
    }
    sort(van.begin(), van.end());

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int k1 = lower_bound(van.begin(), van.end(), l) - van.begin();
        int k2 = lower_bound(van.begin(), van.end(), r) - van.begin();
        if (van[k2] > r)
            k2--;
        int sum = k2 - k1 + 1;
        if (l == 0) sum++;
        cout << sum << endl;
    }
}