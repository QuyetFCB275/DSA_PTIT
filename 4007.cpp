#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int k;
string a, b;

ll solve(string s);
string solve1(ll sum);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k >> a >> b;
        if (k == 10)
            cout << a + b << endl;
        else
        {
            ll sum = solve(a) + solve(b);
            cout << solve1(sum) << endl;
        }
    }
}

ll solve(string s)
{
    ll sum = 0, kt = s.size();
    for (int i = 0; i < s.size(); i++)
    {
        sum += (s[i] - '0') * pow(k, kt - i - 1);
    }
    return sum;
}

string solve1(ll sum)
{
    string s = "";
    while (sum)
    {
        s += to_string(sum % k);
        sum /= k;
    }
    reverse(s.begin(), s.end());
    return s;
}