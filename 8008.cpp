#include <bits/stdc++.h>

using namespace std;

int n;

bool check(string a)
{
    int dem = 0;
    for (int i = 0; i < a.size(); i++)
    {
        dem = dem * 10 + a[i] - '0';
        dem %= n;
    }
    if (dem == 0)
        return true;
    return false;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        queue<string> q;
        q.push("1");
        cin >> n;
        while (1)
        {
            string v = q.front();
            q.pop();
            if (check(v))
            {
                cout << v << endl;
                break;
            }
            else
            {
                q.push(v + "0");
                q.push(v + "1");
            }
        }
    }
}