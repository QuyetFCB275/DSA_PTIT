#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, a;
        cin >> s;
        a = s;
        for (int i=1; i<s.size(); i++)
        {
            if (s[i] != s[i-1]) 
                a[i] = '1';
            else a[i] = '0';
        }
        cout << a << endl;
    }
}