#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<string> q;
        q.push("1");
        int dem = 1;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        while (1)
        {
            string v = q.front();
            cout << v << " ";
            q.pop();
            q.push(v + "0");
            dem++;
            if (dem == n)
                break;
            q.push(v + "1");
            dem++;
            if (dem == n)
                break;
        }
        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
}