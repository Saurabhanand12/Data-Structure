/////// Shortest path using Dijkstra Algorithm
#include<bits/stdc++.h>
#define ll long long
#define pp pair<int,int>
using namespace std;

vector<list<pp>> gr;

void add_edges(int u, int v, int wt, bool bi_dir = true){
    gr[u].push_back({v, wt});
    if(bi_dir) gr[v].push_back({u, wt});
}

unordered_map<int,int> dijkstra(int src, int n){
    priority_queue<pp, vector<pp>, greater<pp>> pq;
    unordered_set<int> vis;
    vector<int> via(n+1);
    unordered_map<int,int> mp;
    for(int i=1;i<=n;i++){
        mp[i] = INT_MAX;
    }

    pq.push({0, src});
    mp[src] = 0;

    while(!pq.empty()){
        auto curr = pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }

        vis.insert(curr.second);
        pq.pop();

        for(auto &neigh : gr[curr.second]){
            if(!vis.count(neigh.first) and mp[neigh.first] > mp[curr.second] + neigh.second){
                pq.push({mp[curr.second] + neigh.second,neigh.first});
                via[neigh.first] = curr.second;
                mp[neigh.first] = mp[curr.second] + neigh.second;
            }
        }
    }

    return mp;
}

int main(){
    int n, m;
    cin >> n >> m;

    gr.resize(n+1,list<pp> ());

    while(m--){
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edges(u, v, wt);
    }
    int src;
    cin >> src;
    unordered_map<int,int> sp = dijkstra(src,n);
    int dest;
    cin>>dest;
    cout<<sp[dest]<<endl;

    return 0;
}