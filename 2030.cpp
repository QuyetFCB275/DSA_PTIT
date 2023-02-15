#include <bits/stdc++.h>

using namespace std;

char c;
int k;
char x[100];

void display()
{
    for (int i=1; i<=k; i++) cout << x[i];
    cout << endl;
}

void Try(int i)
{
    for (int j = x[i-1]; j<= c; j++)
    {
        x[i] = char(j);
        if (i == k) 
            display();
        else Try(i+1);
    }
}

int main ()
{
    x[0] = 65;
    cin >> c >> k;
    Try(1);        
}