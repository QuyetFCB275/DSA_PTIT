#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

int n;

void Tower_HN(int i, char source, char des, char between)
{
    if (i == 1)
    {
        cout << source << " -> " << des << endl;
        return;
    }
    // else
    // {
        Tower_HN(i - 1, source, between, des);
        Tower_HN(1, source, des, between);
        Tower_HN(i - 1, between, des, source);
    // }
}

int main()
{
    cin >> n;
    Tower_HN(n, 'A', 'C', 'B');
}