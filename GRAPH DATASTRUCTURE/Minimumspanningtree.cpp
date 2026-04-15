// ////// MINIMUM SPANING TREE  USING KRUSKAL ALGORITHM 
// #include<bits/stdc++.h>
// #define ll long long int 
// using namespace std;

// int find(vector<int>& parent,int x){
//     if(parent[x] == x) return x;
//     return parent[x] =  find(parent,parent[x]);
// }

// void Union(vector<int>& par,vector<int>& rank,int a , int b){
//     a = find(par,a);
//     b = find(par,b);

//     if(a == b) return;
//     if(rank[a] >= rank[b]){
//         rank[a]++;
//         par[b] = a;
//     }
//     else{
//         rank[b]++;
//         par[a] = b;
//     }
// }

// struct Edge{
//     int src;
//     int dest;
//     int wt;
// };

// bool cmp(Edge e1,Edge e2){
//     return e1.wt < e2.wt;
// }

// ll kruskals(vector<Edge> &input , int n , int e){     /// TC = O(V + ElogE)
//     sort(input.begin(),input.end(),cmp);
//     vector<int> parent(n+1);
//     vector<int> rank(n+1 , 0);
//     for(int i =0 ;i<=n;i++){
//         parent[i] = i;
//     }
//     int edgeCount= 0;
//     int i = 0;
//     ll ans =0;
//     while(edgeCount < n-1 && i < input.size()){
//         Edge curr = input[i];    //  because input is sorted so we will get mim weight Edge
//         int srcPar = find(parent,curr.src);
//         int destPar = find(parent,curr.dest);
//         if(srcPar != destPar){
//             Union(parent,rank,srcPar,destPar);
//             ans += curr.wt;
//             edgeCount++;
//         }
//         i++;
//     }
//     return ans;
// }

// int main(){
//     int n , e;
//     cin>> n >> e;
//     vector<Edge> v(e);
//     for(int i=0;i<e;i++){
//         cin>>v[i].src>>v[i].dest>> v[i].wt;
//     }

//     cout<<kruskals(v,n,e)<<endl;
//     return 0;
// }

/////////////////////
// USING PRIM'S ALGORITHMS
#include<bits/stdc++.h>
#define ll long long
#define pp pair<int,int>
using namespace std;

vector<vector<pp>> gr;

void add_edges(int u, int v, int wt, bool bi_dir = true){
    gr[u].push_back({v, wt});
    if(bi_dir) gr[v].push_back({u, wt});
}

ll prims(int src, int n){
    priority_queue<pp, vector<pp>, greater<pp>> pq;

    vector<bool> vis(n+1, false);
    vector<int> key(n+1, INT_MAX);

    pq.push({0, src});
    key[src] = 0;

    ll result = 0;

    while(!pq.empty()){
        auto curr = pq.top();
        pq.pop();

        int wt = curr.first;
        int node = curr.second;

        if(vis[node]) continue;

        vis[node] = true;
        result += wt;

        for(auto &neigh : gr[node]){
            int adjNode = neigh.first;
            int edgeWt = neigh.second;

            if(!vis[adjNode] && edgeWt < key[adjNode]){
                key[adjNode] = edgeWt;
                pq.push({edgeWt, adjNode});
            }
        }
    }

    return result;
}

int main(){
    int n, m;
    cin >> n >> m;

    gr.resize(n+1);

    while(m--){
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edges(u, v, wt);
    }
    int src;
    cin >> src;
    cout << prims(src, n) << endl;

    return 0;
}
// 5 6
// 1 2 3
// 1 3 4
// 4 2 6
// 5 2 2
// 2 3 5
// 3 5 7
// 1  // 15