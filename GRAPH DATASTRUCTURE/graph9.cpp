//////// Graph is bipartite

// class Solution {
// public:
//     bool isBipartite(vector<vector<int>>& graph) {
//         int n = graph.size();
//         vector<int> color(n, -1);

//         for(int i = 0; i < n; i++) {
//             if(color[i] == -1) {
//                 queue<int> qu;
//                 qu.push(i);
//                 color[i] = 0;

//                 while(!qu.empty()) {
//                     int curr = qu.front();
//                     qu.pop();

//                     for(auto neigh : graph[curr]) {
//                         if(color[neigh] == -1) {
//                             color[neigh] = 1 - color[curr];
//                             qu.push(neigh);
//                         } else {
//                             if(color[neigh] == color[curr])
//                                 return false;
//                         }
//                     }
//                 }
//             }
//         }
//         return true;
//     }
// };