
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin>>n>>m;

    vector<int> g[10000];

    for (int i = 0; i < m; i++) {
        int u, v;

        cin>>u>>v;

        g[u].push_back(v);
        g[v].push_back(u);

    }

    int vis[1000] = {0};
    

    queue<int>q;

    int src;
    cin>>src;

    q.push(src);
    vis[src] = 1;

    cout<<endl;
    while (!q.empty()) {

             int node =q.front();
                q.pop();
                cout<<node<<" ";
              
           

                for (auto e : g[node]) {
                    
                    if(!vis[e])

                    {
                    q.push(e);
                    vis[e]=1;
                   }

            }


        }
    }





