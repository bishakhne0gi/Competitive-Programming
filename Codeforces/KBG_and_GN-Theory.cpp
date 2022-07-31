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
class Graph
{
    int V;
    vector<pair<int, int>> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new vector<pair<int, int>>[v];
    }
    void addEdge(int u, int v, int wt)
    {
        l[u].push_back({wt, v});
        l[v].push_back({wt, u});
    }
    int dikstra(int src, int dest)
    {
        vector<int> distance(V, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
        distance[src] = 0;
        Q.push({0, src});
        while (!Q.empty())
        {
            auto it = Q.top();
            int node = it.second;
            int distTillNow = it.first;
            Q.pop();
            for (auto nbrPair : l[node])
            {
                int nbr = nbrPair.second;
                int currentEdge = nbrPair.first;
                if (distTillNow + currentEdge < distance[nbr])
                {
                    distance[nbr] = distTillNow + currentEdge;
                    Q.push({distance[nbr], nbr});
                }
            }
        }
        return distance[dest];
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, q;
        cin >> v >> q;
        Graph g(v);
        for (int i = 1; i <= v; i++)
        {
            for (int j = 1; j <= v; j++)
            {
                if (j % i == 0 && j!=i)
                {
                    g.addEdge(i, j, (j / i));
                }
            }
        }
        // for (int i = 1; i <= q; i++)
        // {
        //     ll u, v;
        //     cin >> u >> v;
        //     cout << g.dikstra(u, v) << endl;
        // }
         cout << g.dikstra(2, 3) << endl;
    }

    return 0;
}