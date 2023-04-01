#include <bits/stdc++.h>

using namespace std;

void test()
{
    int n;
    cin >> n;
    vector<string> vt;
    vt.push_back("0");
    vt.push_back("1");

    for (int i = 2; i <= n; i++)
    {
        int len = vt.size();
        for (int i = len - 1; i >= 0; i--)
            vt.push_back(vt[i]);

        for (int i = 0; i < len; i++)
            vt[i] = "0" + vt[i];

        for (int i = len; i < vt.size(); i++)
            vt[i] = "1" + vt[i];
    }
    for (string s : vt)
        cout << s << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        test();
    }
}