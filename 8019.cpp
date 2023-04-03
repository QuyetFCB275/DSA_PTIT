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
        q.push("6");
        q.push("8");
        vector<string> vt;
        vt.push_back("6");
        vt.push_back("8");
        while (1)
        {
            string s = q.front();
            q.pop();
            string a = s + "6", b = s + "8";
            if (a.size() <= n)
            {
                vt.push_back(a);
                vt.push_back(b);
                q.push(a);
                q.push(b);
            }
            else
                break;
        }
        cout << vt.size() << endl;
        for (int i = vt.size() - 1; i >= 0; i--)
            cout << vt[i] << " ";
        cout << endl;
    }
}