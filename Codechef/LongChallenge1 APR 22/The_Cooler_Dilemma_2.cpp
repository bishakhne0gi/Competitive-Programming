#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == y || x > y)
            cout << 0 << endl;
        else
        {
            if (y % x == 0)
            {
                int store = (y / x) - 1;
                cout << store << endl;
            }
            else
            {
                int store = y / x;
                cout << store << endl;
            }
        }
    }
    return 0;
}