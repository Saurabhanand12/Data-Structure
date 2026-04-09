// #include<bits/stdc++.h>
// using namespace std;

// vector<list<int>> graph;
// int v;
// void add_edges(int a, int b, bool bi_dir = false){
//     graph[a].push_back(b);
//     if(bi_dir)  graph[b].push_back(a);
// }

// void topoBSF(){   // Kahn's Algorithm
//     vector<int> indegree(v, 0);
//     for(int i = 0; i < v; i++){
//         for(auto neigh : graph[i]){
//             indegree[neigh]++;
//         }
//     }
    
//     queue<int> qu;
//     unordered_set<int> vis;
//     for(int i = 0; i < v; i++){
//         if(indegree[i] == 0){
//             qu.push(i);
//             vis.insert(i);
//         }
//     }

//     while(!qu.empty()){
//         int node = qu.front();
//         cout<<node<<" ";
//         qu.pop();
//         for(auto neigh : graph[node]){
//             if(not vis.count(neigh)){
//                 indegree[neigh]--;
//                 if(indegree[neigh] == 0){
//                     qu.push(neigh);
//                     vis.insert(neigh);
//                 }
//             }
//         }
//     }

// }

// int main(){
//     cout << "Enter Number of vertex : " << " ";
//     cin >> v;
//     graph.resize(v, list<int>());
//     int e;
//     cout << "Enter Number of edges : " << " ";
//     cin >> e;
//     while(e--){
//         int x, y;
//         cout << "Enter the value of x and y : " << " ";
//         cin >> x >> y;
//         add_edges(x, y);
//     }
//     cout<< "TopoLogical Sort BFS : "<<" ";
//     topoBSF();
//     return 0;
// }


///// Course Schedule 1 and 2 
// class Solution {
// public:
//     void TopoBFS(int v,vector<vector<int>>& edges,vector<int>& ans){
//         // step 1 make indegree 
//         vector<int> indegree(v,0);
//         vector<vector<int>> adj(v);
//         for(auto &e : edges){
//             int a = e[0];
//             int b = e[1];

//             adj[b].push_back(a);  // b → a
//             indegree[a]++;
//         }
//         // step 2 push on queue
//         queue<int> q;
//         for(int i=0;i<v;i++){
//             if(indegree[i] == 0) q.push(i);
//         }

//         // step 3 
//         while(!q.empty()){
//             int node = q.front();
//             ans.push_back(node);
//             q.pop();

//             for(auto neigh : adj[node]){
//                 indegree[neigh]--;
//                 if(indegree[neigh] == 0)  q.push(neigh);
//             }

//         }
//     }
//     vector<int> findOrder(int v, vector<vector<int>>& edges) {
//         vector<int> ans;
//         TopoBFS(v,edges,ans);

//         if(ans.size() != v){
//             return {};
//         }
//         return ans;
//     }
// };