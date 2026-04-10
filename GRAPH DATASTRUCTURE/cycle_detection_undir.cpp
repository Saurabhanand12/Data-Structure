////// Detect Cycle using DSU 
// #include<bits/stdc++.h>
// using namespace std;

// int find(int x , vector<int>& parent){
//     if(parent[x] == x) return x;
//     return parent[x] = find(parent[x],parent);
// }

// bool Union(int a ,int b, vector<int>& parent,vector<int>& rank){
//     a = find(a,parent);
//     b = find(b,parent);

//     if(a == b) return true;

//     if(rank[a] >= rank[b]){
//         rank[a]++;
//         parent[b] = a;
//     }
//     else{
//         rank[b]++;
//         parent[a] = b;
//     }
//     return false;
// }

// int main(){
//     int n,m;
//     cout<<"Enter Vertex and Edges: "<<" ";
//     cin>> n >> m;
//     vector<int> parent(n+1);
//     vector<int> rank(n+1,0);

//     for(int i =0;i<=n;i++){
//         parent[i] = i;
//     }

//     while(m--){
//         string str;
//         cout<<"Enter your method :"<<" ";
//         cin>>str;
//         if(str == "Union"){
//             int x ,y;
//             cout<<"Enter value of x & y : "<<" ";
//             cin>> x>> y;
//             bool b = Union(x,y,parent,rank);
//             if(b == true ) cout<<"Cycle is Detected"<<endl;
//         }
//     }
//     return 0;
// }

/////// Detect Cycle using dfs

// #include<bits/stdc++.h>
// using namespace std;

// vector<list<int>> graph;
// vector<vector<int>> result;
// int v ; // no of vertex;
// void add_edge(int src,int dest,bool bi_dir = true){
//     graph[src].push_back(dest);
//     if(bi_dir)  graph[dest].push_back(src);   
// }

// bool dfs(int src , int parent,unordered_set<int>& vis){
//     vis.insert(src);
//     for(auto neigh : graph[src]){
//         if(vis.count(neigh) and neigh != parent) return true;    // next visited + next is not parent
//         if(!vis.count(neigh)){
//             if(dfs(neigh, src, vis)) return true;
//         }
//     }
//     return false;
// }

// bool cycle(){
//    unordered_set<int> vis;
//    bool result = false;
//    for(int i=0;i<v;i++){
//         if(!vis.count(i)){
//             result = dfs(i,-1,vis);
//             if(result == true) return true;
//         }
//    }
//    return false;
// }

// int main() {
//     cin>>v;
//     graph.resize(v,list<int> ());
//     int e;
//     cin>>e;
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         add_edge(s,d);
//     }
//     bool b = cycle();
//     if(b == 1 ) cout<<"Cycle is Detected "<<endl;
//     else cout<<"Cycle is not detected"<<endl;

// return 0;
// }

////// Cycle detection using BFS
#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
vector<vector<int>> result;
int v ; // no of vertex;
void add_edge(int src,int dest,bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir)  graph[dest].push_back(src);   
}

bool bfs(int src , vector<int>& par,unordered_set<int>& vis){
    queue<int> q;
    q.push(src);
    vis.insert(src);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto neigh : graph[curr]){
            if(vis.count(neigh) && par[curr] != neigh) return true;
            if(!vis.count(neigh)){
                vis.insert(neigh);
                par[neigh] = curr;
                q.push(neigh);
            }
        }
    }
    return false;
}

bool cycle(){
    vector<int> par(v,-1);
   unordered_set<int> vis;
   bool result = false;
   for(int i=0;i<v;i++){
        if(!vis.count(i)){
            result = bfs(i,par,vis);
            if(result == true) return true;
        }
   }
   return false;
}

int main() {
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    bool b = cycle();
    if(b == 1 ) cout<<"Cycle is Detected "<<endl;
    else cout<<"Cycle is not detected"<<endl;

return 0;
}
