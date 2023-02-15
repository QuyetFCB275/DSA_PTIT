#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

string s;
char a[100], b[100];
int k;
bool unused[100];
vector<string> vt;

void display()
{
    for (int i = 1; i <= k; i++)
        cout << b[i];
    cout << " ";
}

void Try(int i)
{
    for (int j = 1; j <= k; j++)
    {
        if (unused[a[j]])
        {
            b[i] = a[j];
            unused[a[j]] = false;
            if (i == k)
                display();
            else
                Try(i + 1);
            unused[a[j]] = true;
        }
    }
}

void solve()
{
    vt.clear();
    cin >> s;
    k = 0;
    for (auto x : s)
    {
        a[++k] = x;
    }
    Try(1);
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        memset(unused, true, 100);
        solve();
        cout << endl;
    }
}

/* Cách 2
#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

string s;
char a[100], b[100];
int k;
bool unused[100];
vector<string> vt;

void Try(int i, string s)
{
    for (int j = 1; j <= k; j++)
    {
        if (unused[a[j]])
        {
            s += a[j];
            unused[a[j]] = false;
            if (i == k)
                vt.push_back(s);
            else
                Try(i + 1, s);
            unused[a[j]] = true;
            s.pop_back();
        }
    }
}

void solve()
{
    vt.clear();
    cin >> s;
    k = 0;
    for (auto x : s)
    {
        a[++k] = x;
    }
    Try(1, "");
    for (auto x : vt)
        cout << x << " ";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        memset(unused, true, 100);
        solve();
        cout << endl;
    }
}
*/