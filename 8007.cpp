#include <bits/stdc++.h>

using namespace std;

string s;

bool check(string a)
{
    if (a.size() == s.size())
        return a <= s;
    return a.size() < s.size();
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int dem = 1;
        queue<string> q;
        q.push("1");
        cin >> s;
        while (1)
        {
            string v = q.front();
            q.pop();
            if (check(v + "0"))
            {
                q.push(v + "0");
                dem++;
            }
            else
                break;
            if (check(v + "1"))
            {
                q.push(v + "1");
                dem++;
            }
            else
                break;
        }
        cout << dem << endl;
    }
}