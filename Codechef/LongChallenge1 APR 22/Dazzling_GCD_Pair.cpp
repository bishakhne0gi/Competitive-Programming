#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int m = 0, n = 0;
        if(a%2==0)
        {
            if(a+2 <= b)
                {
                    cout<<a<<" "<<a+2<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
        }
        else
        {
            if(a%3==0)
            {
                if(a+3 <= b)
                {
                    cout<<a<<" "<<a+3<<endl;
                }
                else
                    {
                        cout<<-1<<endl;
                    }
            }
            else
            {
                if(a+3 <= b)
                {
                    cout<<a+1<<" "<<a+3<<endl;
                }
                else
                    cout<<-1<<endl;
            }
        }
    }
    return 0;
}