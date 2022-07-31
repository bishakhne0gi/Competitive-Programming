#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int store = (n / 4);
        if (n <= 4)
        {
            cout << 1 << endl;
        }
        else
        {
            if (n % 4 != 0)
            {
                cout << store + 1 << endl;
            }
            else
                cout << store << endl;
        }
    }
    return 0;
}