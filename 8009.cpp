#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int s, t;
        cin >> s >> t;
        int dem = 0;
        if (s > t)
        {
            dem = s - t;
        }
        else
        {
            while (1)
            {
                if (t % 2 == 0 && t > s)
                {
                    t /= 2;
                    dem++;
                }
                else
                {
                    t++;
                    dem++;
                }
                if (t == s)
                    break;
            }
        }
        cout << dem << endl;
    }
}