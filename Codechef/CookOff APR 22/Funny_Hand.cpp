#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int sub = abs(a - b);
        if (sub == 2)
        {
            cout << 1 << endl;
        }
        else if(sub!=1)
        {
            cout << 0 << endl;
        }
        else
        {
            // if (a > 1 && b > 1)
            // {
            //         int prod = 2;
            //         cout << prod << endl;
            // }
            if (a == 1 || b == 1 || a==n || b==n)
            {
                
                    int prod = 1;
                    cout << prod << endl;
          
            }
            else{
                     int prod = 2;
                    cout << prod << endl;
            }
               
        }
    }
    return 0;
}