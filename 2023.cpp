#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)
typedef long long ll;

int n, k;
string a[100];
int x[100];

void Try(int );
void display();

int main ()
{
    set<string> se;
    cin >> n >> k;
    for (int i=1; i<=n; i++)
    {
        string s;
        cin >> s;
        se.insert(s);
    }
    int dem = 0;
    for (auto itr : se)
    {
        a[++dem] = itr;
    }
    n = dem;
    Try(1);
}

void Try(int i)
{
    for (int j = x[i-1] + 1; j<=n-k+i; j++)
    {
        x[i] = j;
        if (i == k)
        {
            display();
        }
        else 
        {
            Try(i+1);
        }
    }
}

void display()
{
    for (int i=1; i<=k; i++)
        cout << a[x[i]] << " ";
    cout << endl;
}