#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int n;
string s;
vector<string> vt;

void Try(int, string);
bool dk(string a);
void display();

int main()
{
    n = 8;
    Try(1, "");
    display();
}

bool dk(string a)
{
    if (a[0] == '0' && a[1] == '0')
        return false;
    if (a[2] != '0' || a[3] == '0')
        return false;
    if (a[4] == '0')
        return false;
    return true;
}

void Try(int i, string s)
{
    for (int j = 0; j <= 2; j++)
    {
        if (j != 1)
        {
            s += to_string(j);
            if (i == n)
            {
                if (dk(s))
                    vt.push_back(s);
            }
            else
            {
                Try(i + 1, s);
            }
            s.pop_back();
        }
    }
}

void display()
{
    for (auto x : vt)
    {
        x.insert(2, "/");
        x.insert(5, "/");
        cout << x << endl;
    }
}