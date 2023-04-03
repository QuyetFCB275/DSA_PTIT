#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "PUSH")
        {
            int x;
            cin >> x;
            q.push(x);
        }
        if (s == "PRINTFRONT")
        {
            if (q.empty())
                cout << "NONE";
            else
                cout << q.front();
            cout << endl;
        }
        if (s == "POP" && !q.empty())
            q.pop();
    }
}