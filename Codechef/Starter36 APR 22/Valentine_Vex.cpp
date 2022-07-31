#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long>
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
        vi odd;
        vi even;
        int noe = 0, noo = 0, score = 0, temp_score = 0;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            if (z & 1)
            {
                odd.push_back(z);
                noo += 1;
            }
            else
            {
                even.push_back(z);
                noe += 1;
            }
            arr.push_back(z);
        }
        sort(arr.begin(), arr.end(), greater<int>());
        sort(even.begin(), even.end(), greater<int>());
        sort(odd.begin(), odd.end(), greater<int>());
        cout << "ODD: " << endl;
        for (int i = 0; i < noo; i++)
        {
            cout << odd[i] << " ";
        }
        cout << endl;
        cout << "EVEN: " << endl;
        for (int i = 0; i < noe; i++)
        {
            cout << even[i] << " ";
        }
        cout << endl;
        //
        // first posi a
        if (arr[0] % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if(i%2)
            }
        }
    }
    return 0;
}