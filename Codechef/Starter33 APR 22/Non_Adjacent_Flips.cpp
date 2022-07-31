#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;
        bool flag = false;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count += 1;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')
            {
                flag = true;
                break;
            }
        }
        if (count == 0)
            cout << 0 << endl;
        else
        {
            if (n % 2 != 0)
            {
                if (count <= (n / 2) + 1 && flag == false)
                    cout << 1 << endl;
                else
                {
                    cout << 2 << endl;
                }
            }
            else
            {
                if (count <= (n / 2) && flag == false)
                    cout << 1 << endl;
                else
                {
                    cout << 2 << endl;
                }
            }
            }
        }
    
    return 0;
}