#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        queue<int> q;
        int end;
        int n;
        cin >> n;
        while (n--)
        {
            int v;
            cin >> v;
            if (v == 1)
                cout << q.size() << endl;
            if (v == 2)
            {
                if (q.empty())
                    cout << "YES";
                else
                    cout << "NO";
                cout << endl;
            }
            if (v == 3)
            {
                int a;
                cin >> a;
                end = a;
                q.push(a);
            }
            if (v == 4)
            {
                if (!q.empty())
                    q.pop();
            }
            if (v == 5)
            {
                if (!q.empty())
                    cout << q.front();
                else
                    cout << -1;
                cout << endl;
            }
            if (v == 6)
            {
                if (!q.empty())
                    cout << end;
                else
                    cout << -1;
                cout << endl;
            }
        }
    }
}