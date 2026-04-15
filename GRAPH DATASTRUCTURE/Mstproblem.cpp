///////1584. Min Cost to Connect All Points
// class Solution {
// public:
    
//     int find(vector<int>& parent, int x){
//         if(parent[x] == x) return x;
//         return parent[x] = find(parent, parent[x]);
//     }
    
//     void Union(vector<int>& parent, vector<int>& rank, int a, int b){
//         a = find(parent, a);
//         b = find(parent, b);
        
//         if(a == b) return;
        
//         if(rank[a] > rank[b]){
//             parent[b] = a;
//         }
//         else if(rank[b] > rank[a]){
//             parent[a] = b;
//         }
//         else{
//             parent[b] = a;
//             rank[a]++;
//         }
//     }
    
//     int minCostConnectPoints(vector<vector<int>>& points) {
//         int n = points.size();
        
//         vector<vector<int>> edges;
        
//         // Step 1: create all edges
//         for(int i = 0; i < n; i++){
//             for(int j = i+1; j < n; j++){
//                 int dist = abs(points[i][0] - points[j][0]) +
//                            abs(points[i][1] - points[j][1]);
                
//                 edges.push_back({dist, i, j});
//             }
//         }
        
//         // Step 2: sort edges
//         sort(edges.begin(), edges.end());
        
//         vector<int> parent(n), rank(n, 0);
//         for(int i = 0; i < n; i++) parent[i] = i;
        
//         int cost = 0;
//         int edgeCount = 0;
        
//         // Step 3: Kruskal
//         for(auto &e : edges){
//             int wt = e[0];
//             int u = e[1];
//             int v = e[2];
            
//             if(find(parent, u) != find(parent, v)){
//                 Union(parent, rank, u, v);
//                 cost += wt;
//                 edgeCount++;
                
//                 if(edgeCount == n-1) break;
//             }
//         }
        
//         return cost;
//     }
// };