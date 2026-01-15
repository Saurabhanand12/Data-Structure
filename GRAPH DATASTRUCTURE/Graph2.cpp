// ///////TRAVERSAL -> DFS /// path is exist of not 
// #include<iostream>
// #include<vector>
// #include<list>
// #include<unordered_set>
// using namespace std;
 
// vector<list<int>> graph;
// unordered_set<int> visited;                            ///dfs check visited
// int v ; // no of vertex;
// void add_edge(int src,int dest,bool bi_dir = true){
//     graph[src].push_back(dest);
//     if(bi_dir){
//         graph[dest].push_back(src);
//     }
// }
// bool dfs(int curr,int end){
//     if(curr == end) return true;
//     visited.insert(curr);            //mark visited
//     for(auto neighbour : graph[curr]){
//         if(not visited.count(neighbour)){
//             bool result = dfs(neighbour,end);
//             if(result)  return true;
//         }
//     }
//     return false;
// }
// bool anypath(int src,int dest){
//     return dfs(src,dest);
// }
// int main() {
//     cin>>v;
//     graph.resize(v,list<int> ());
//     int e;
//     cin>>e;
//     visited.clear();
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         add_edge(s,d);
//     }
//     int x,y;
//     cin>>x>>y;
//     cout<<anypath(x,y)<<endl;
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////
///////TRAVERSAL -> DFS 
// #include<iostream>
// #include<vector>
// #include<list>
// #include<unordered_set>
// using namespace std;

// vector<list<int>> graph;
// vector<vector<int>> result;
// unordered_set<int> visited;
// int v ; // no of vertex;
// void add_edge(int src,int dest,bool bi_dir = true){
//     graph[src].push_back(dest);
//     if(bi_dir){
//         graph[dest].push_back(src);
//     }
// }
// void dfs(int curr,int end,vector<int>& path){
//     if(curr == end){
//         path.push_back(curr);
//         result.push_back(path);
//         path.pop_back();
//         return;
//     }
//     visited.insert(curr); 
//     path.push_back(curr);           //mark visited
//     for(auto neighbour : graph[curr]){
//         if(not visited.count(neighbour)){
//             dfs(neighbour,end,path);
//         }
//     }
//     path.pop_back();
//     visited.erase(curr);
//     return ;
// }

// void allpath(int src,int dest){
//     vector<int> v;
//     dfs(src,dest,v);
// }
// int main() {
//     cin>>v;
//     graph.resize(v,list<int> ());
//     int e;
//     cin>>e;
//     visited.clear();
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         add_edge(s,d);
//     }
//     int x,y;
//     cin>>x>>y;
//     allpath(x,y);
//     for(auto path : result){
//         for(auto el : path){
//             cout<<el<<" ";
//         }
//         cout<<endl;
//     }

// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////TRAVERSAL -> BFS BREADTH FIRST SEARCH
// #include<iostream>
// #include<vector>
// #include<list>
// #include<unordered_set>
// #include<queue>
// #include<climits>
// using namespace std;

// vector<list<int>> graph;
// vector<vector<int>> result;
// unordered_set<int> visited;
// int v ; // no of vertex;
// void add_edge(int src,int dest,bool bi_dir = true){
//     graph[src].push_back(dest);
//     if(bi_dir){
//         graph[dest].push_back(src);
//     }
// }

// void bfs(int src,int dest,vector<int>& dist){
//     queue<int> qu;
//     visited.clear();
//     dist.resize(v,INT_MAX);
//     dist[src] =0;
//     visited.insert(src);
//     qu.push(src);
//     while(not qu.empty()){
//         int curr = qu.front();
//         qu.pop();
//         for(auto neighbour : graph[curr]){
//             if(not visited.count(neighbour)){
//                 qu.push(neighbour);
//                 visited.insert(neighbour);
//                 dist[neighbour] = dist[curr] +1;
//             }
//         }
//     }
// }

// int main() {
//     cin>>v;
//     graph.resize(v,list<int> ());
//     int e;
//     cin>>e;
//     visited.clear();
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         add_edge(s,d);
//     }
//     int x,y;
//     cin>>x>>y;
//     vector<int> dist;
//     bfs(x,y,dist);
//     for(int i=0;i<dist.size();i++){
//         cout<<dist[i]<<" ";
//     }
// return 0;
// }