// // ///////TRAVERSAL -> DFS /// path is exist or not 
// #include<iostream>
// #include<vector>
// #include<list>
// #include<queue>

// using namespace std;

// vector<list<int>> graph;
// int v;

// void add_edges(int src ,int des, bool bi_dir = true){
//     graph[src].push_back(des);
//     if(bi_dir) graph[des].push_back(src);
// }

// void dfshelper(int src,vector<bool>& vis){
//     cout<<src<<" ";
//     vis[src] = true;

//     for(int neigh : graph[src]){
//         if(!vis[neigh]){
//             dfshelper(neigh,vis);
//         }
//     }
// }

// void dfs(){
//    int src =0;
//    vector<bool> vis(graph.size(),false);

//    dfshelper(src,vis);
// }

// int main(){
//     cout<<"Enter vertex : "<<" ";
//     cin>>v;
//     graph.resize(v,list<int>());
//     int e;
//     cout<<"Enter Edges : "<< " ";
//     cin>>e;

//     while(e--){
//         int s , d;
//         cout<<" Enter Source and Destination : "<<" ";
//         cin>> s >> d;
//         add_edges(s,d);
//     }

//     dfs();
    
//     return 0;
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
// #include<queue>
// #include<vector>
// #include<list>
// using namespace std;

// vector<list<int>> graph;
// int v;

// void add_edges(int s,int d,bool bi_dir = true){
//     graph[s].push_back(d);
//     if(bi_dir)  graph[d].push_back(s);
// }

// void bfs(int src){
//     int n = graph.size();
//     queue<int> q;
//     vector<bool> vis(n,false);

//     q.push(src);
//     vis[src] = true;

//     while(!q.empty()){
//         int u = q.front();
//         q.pop();

//         cout<<u<<" ";

//         for(int neigh : graph[u]){
//             if(vis[neigh] == false){
//                 vis[neigh] = true;
//                 q.push(neigh);
//             }
//         }
//     }
// }

// int main(){
//     cout<<"Enter Vertex : "<<" ";
//     cin>>v;
//     graph.resize(v,list<int>());
//     int e;
//     cout<<"Enter Edge : "<<" ";
//     cin>>e;
//     while(e--){
//         int s,d;
//         cout<<"Enter Source and Destination : "<< " ";
//         cin>> s>> d;
//         add_edges(s,d);
//     }
//     int src ;
//     cout<<"Enter Source Value : "<<" ";
//     cin>> src;

//     bfs(src);

//     return 0;
// }