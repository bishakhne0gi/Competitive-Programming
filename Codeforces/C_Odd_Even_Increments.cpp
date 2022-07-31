#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long
#define pii pair<int, int>
#define ff first
#define ss second
#define setBits(x) builin_popcount(x)
using namespace std;
void helper()
{
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi arr;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            arr.push_back(z);
        }
        bool flag1 = true;
        bool flag2 = true;
        bool flag3 = true;
        if(n==2)
        {
            cout<<"YES"<<endl;
        }
        else if (arr[0] % 2 == 0)
        {
            for (int i = 0; i < n; i = i + 2)
            {
                if (arr[i] % 2 != 0)
                {
                    flag1 = false;
                    break;
                }
            }
            if (arr[1] % 2 == 0)
            {
                for (int i = 1; i < n; i = i + 2)
                {
                    if (arr[i] % 2 != 0)
                    {
                        flag2 = false;
                        break;
                    }
                }
            }
            else
            {
                 for (int i = 1; i < n; i = i + 2)
                {
                    if (arr[i] % 2 == 0)
                    {
                        flag3 = false;
                        break;
                    }
                }
            }
            if(flag1==true && flag2==true && flag3==true )
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            for (int i = 0; i < n; i = i + 2)
            {
                if (arr[i] % 2 == 0)
                {
                    flag1 = false;
                    break;
                }
            }
            if (arr[1] % 2 != 0)
            {
                for (int i = 1; i < n; i = i + 2)
                {
                    if (arr[i] % 2 == 0)
                    {
                        flag2 = false;
                        break;
                    }
                }
            }
            else
            {
                 for (int i = 1; i < n; i = i + 2)
                {
                    if (arr[i] % 2 != 0)
                    {
                        flag3 = false;
                        break;
                    }
                }
            }
            if(flag1==true && flag2==true && flag3==true )
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}