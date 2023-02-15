#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<vector<int>> vt(n + 5);
    for (int i = 1; i <= n; i++)
    {
        string s, q = "";
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            int k = stoi(tmp);
            if (k > i)
                vt[i].push_back(k);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (auto x : vt[i])
            cout << i << " " << x << endl;
    }
}