#include<bits/stdc++.h>
using namespace std;

vector<int>g[10000];

int vis[1000] = {0};

void dfs(int node) {

    vis[node] = 1;

    cout << node << " ";

    for (auto e : g[node]) {
        if (!vis[e]) {
            dfs(e);

        }
    }
}

int main() {

    int v, e;

    cin >> v>>e;



    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u>>v;

        g[u].push_back(v);
        g[v].push_back(u);

    }

    int src;
    cin>>src;

    dfs(src);

}
