#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> dq;
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "PUSHBACK")
        {
            int x;
            cin >> x;
            dq.emplace_back(x);
        }
        if (s == "PUSHFRONT")
        {
            int x;
            cin >> x;
            dq.push_front(x);
        }
        if (s == "PRINTFRONT")
        {
            if (dq.empty())
                cout << "NONE";
            else
                cout << dq.front();
            cout << endl;
        }
        if (s == "PRINTBACK")
        {
            if (dq.empty())
                cout << "NONE";
            else
                cout << dq.back();
            cout << endl;
        }
        if (!dq.empty())
        {
            if (s == "POPFRONT")
                dq.pop_front();
            if (s == "POPBACK")
                dq.pop_back();
        }
    }
}