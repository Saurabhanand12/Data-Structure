// /////// Shortest path using Dijkstra Algorithm
// #include<bits/stdc++.h>
// #define ll long long
// #define pp pair<int,int>
// using namespace std;

// vector<list<pp>> gr;

// void add_edges(int u, int v, int wt, bool bi_dir = true){
//     gr[u].push_back({v, wt});
//     if(bi_dir) gr[v].push_back({u, wt});
// }

// unordered_map<int,int> dijkstra(int src, int n){
//     priority_queue<pp, vector<pp>, greater<pp>> pq;
//     unordered_set<int> vis;
//     vector<int> via(n);
//     unordered_map<int,int> mp;
//     for(int i=1;i<=n;i++){
//         mp[i] = INT_MAX;
//     }

//     pq.push({0, src});
//     mp[src] = 0;

//     while(!pq.empty()){
//         auto curr = pq.top();
//         if(vis.count(curr.second)){
//             pq.pop();
//             continue;
//         }

//         vis.insert(curr.second);
//         pq.pop();

//         for(auto &neigh : gr[curr.second]){
//             if(!vis.count(neigh.first) and mp[neigh.first] > mp[curr.second] + neigh.second){
//                 pq.push({mp[curr.second] + neigh.second,neigh.first});
//                 via[neigh.first] = curr.second;
//                 mp[neigh.first] = mp[curr.second] + neigh.second;
//             }
//         }
//     }

//     return mp;
// }

// int main(){
//     int n, m;
//     cin >> n >> m;

//     gr.resize(n,list<pp> ());

//     while(m--){
//         int u, v, wt;
//         cin >> u >> v >> wt;
//         add_edges(u, v, wt);
//     }
//     int src;
//     cin >> src;
//     unordered_map<int,int> sp = dijkstra(src,n);
//     int dest;
//     cin>>dest;
//     cout<<sp[dest]<<endl;

//     return 0;
// }

//////1368. Minimum Cost to Make at Least One Valid Path in a Grid
// using 01 bfs and deque
// class Solution {
// public:
//     int minCost(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();

//         vector<vector<int>> dist(n, vector<int>(m, 1e9));

//         int dx[4] = {0, 0, 1, -1};
//         int dy[4] = {1, -1, 0, 0};

//         deque<pair<int,int>> dq;
//         dq.push_front({0,0});
//         dist[0][0] = 0;

//         while(!dq.empty()){
//             auto [x, y] = dq.front();
//             dq.pop_front();

//             for(int i = 0; i < 4; i++){
//                 int nx = x + dx[i];
//                 int ny = y + dy[i];

//                 if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

//                 int cost = (grid[x][y] == i + 1) ? 0 : 1;

//                 if(dist[nx][ny] > dist[x][y] + cost){
//                     dist[nx][ny] = dist[x][y] + cost;

//                     if(cost == 0)
//                         dq.push_front({nx, ny}); // priority
//                     else
//                         dq.push_back({nx, ny});
//                 }
//             }
//         }
//         return dist[n-1][m-1];
//     }
// };