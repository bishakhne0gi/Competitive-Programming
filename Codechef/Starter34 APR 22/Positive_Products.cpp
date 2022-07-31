#include <bits/stdc++.h>
#define vi vector<int>
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
        long long neg = 0;
        long long pos = 0;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            if (z < 0)
            {
                neg += 1;
            }
            else if (z > 0)
                pos += 1;
        }

        long long store_pos = (pos * (pos - 1)) / 2;
        long long store_neg = (neg * (neg - 1)) / 2;
        cout << store_neg + store_pos << endl;
    }
    return 0;
}