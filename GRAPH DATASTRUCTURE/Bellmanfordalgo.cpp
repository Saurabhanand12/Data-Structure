//////// BELLMAN FORD ALOGRITHM FOR NEGATIVE EDGE WEIGTH
#include <bits/stdc++.h>
using namespace std;
#define pp pair<int,int>

vector<vector<pp>> gr;

void add_edge(int u, int v, int wt, bool bi_dir = true){
    gr[u].push_back({v, wt});
    if(bi_dir) gr[v].push_back({u, wt});
}

vector<int> dijkstra(int src, int n){
    priority_queue<pp, vector<pp>, greater<pp>> pq;
    vector<int> dist(n, INT_MAX);

    pq.push({0, src});
    dist[src] = 0;

    while(!pq.empty()){
        int currDist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if(currDist > dist[node]) continue;

        for(auto &neigh : gr[node]){
            int nextNode = neigh.first;
            int weight = neigh.second;

            if(dist[node] + weight < dist[nextNode]){
                dist[nextNode] = dist[node] + weight;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }
    return dist;
}

int main(){
    int n, m;
    cin >> n >> m;

    gr.resize(n);

    for(int i = 0; i < m; i++){
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edge(u, v, wt);
    }

    int src;
    cin >> src;

    vector<int> dist = dijkstra(src, n);

    int dest;
    cin >> dest;

    if(dist[dest] == INT_MAX) cout << "No Path\n";
    else cout << dist[dest] << endl;

    return 0;
}