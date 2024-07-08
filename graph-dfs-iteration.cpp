#include<bits/stdc++.h>
using namespace std;

int main() {

    int v, e;

    cin>>v>>e;

    vector<int>g[10000];

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u>>v;

        g[u].push_back(v);
        g[v].push_back(u);

    }

    int vis[1000] = {0};
    stack<int>s;
    int src;
    cin>>src;
    s.push(src);
    vis[src] = 1;

    while (!s.empty()) {

        int node = s.top();
        s.pop();
        cout << node << " ";

        for (auto a : g[node]) {
            if (!vis[a])
 {
                s.push(a);
                vis[a] = 1;
            }

        }


    }
}
