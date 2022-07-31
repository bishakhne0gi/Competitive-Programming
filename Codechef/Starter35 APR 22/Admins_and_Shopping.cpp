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
        ll n, x;
        cin >> n >> x;
        vector<ll> arr;
        ll count_1 = 0;
        ll count_2 = 0;
        ll count_3 = 0;
        ll res=0;
        int store=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            if (z < x)
                count_1 += 1;
            else if (z == x)
                count_2 += 1;
            else if (z > x)
                count_3 += 1;
            arr.push_back(z);
            store=min(store,z);
        }
        if(x%store!=0)
            res+=1;
        res+=(x/store);
        res=max(n,res);
        cout<<res<<endl;

        // //   sort(arr.begin(),arr.end());
        // //   reverse(arr.begin(),arr.end());
        // //   ll temp=n;
        // //   while(temp>)
        // if (n == 1)
        // {
        //     if(arr[0]>=x)
        //         cout<<1<<endl;
        //     else
        //     {
        //         if(x%arr[0]==0)
        //             cout<<(x/arr[0])<<endl;
        //         else
        //             cout<<(x/arr[0])+1<<endl;
        //     }
        // }
        // else
        // {
        //     if (count_1 > 0 && count_2 > 0 && count_3 > 0)
        //         cout << n << endl;
        //     else if (count_1 == n && count_2 == 0 && count_3 == 0)
        //         cout << (n + (x - 1)) << endl;
        //     else if (count_1 == 0 && count_2 == n && count_3 == 0)
        //         cout << n << endl;
        //     else
        //         cout << n << endl;
        // }
    }
    return 0;
}