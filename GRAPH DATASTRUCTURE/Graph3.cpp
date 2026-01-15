//////// FLOOD FILL ALGORITHM 733 ///// INTERVIEW QUESTION 
// class Solution {
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         if(color == image[sr][sc] ) return image;
//         dfs(image,sr,sc,image[sr][sc],color);
//         return image;
//     }
//     void dfs(vector<vector<int>>& image,int currRow ,int currCol,int initialcolor,int newcolor){
//         int n = image.size();
//         int m = image[0].size();
//         if(currRow < 0 || currCol < 0 || currRow >= n || currCol >= m){
//             return;
//         }
//         if(image[currRow][currCol] != initialcolor)  return;

//         image[currRow][currCol] = newcolor;
//         dfs(image,currRow+1,currCol,initialcolor,newcolor);      ///aplication-> fill bucket in ms word

//         dfs(image,currRow,currCol+1,initialcolor,newcolor);
//         dfs(image,currRow-1,currCol,initialcolor,newcolor);
//         dfs(image,currRow,currCol-1,initialcolor,newcolor);
//     }
// };

//////////////// FIND CENTER OF STAR GRAPH //1791
// class Solution {
// public:
//     int findCenter(vector<vector<int>>& edges) {
//         int a = edges[0][0];
//         int b = edges[0][1];

//         int c = edges[1][0];
//         int d = edges[1][1];
//         return (c == a || c == b)  ? c : d;
//     }
// };

////////////// KEYS AND ROOMS // 841
// class Solution {
// public:
//     bool canVisitAllRooms(vector<vector<int>>& rooms) {
//         unordered_set<int> visited;
//         queue<int> qu;
//         qu.push(0);
//         visited.insert(0);
//         while(!qu.empty()){
//             int curr = qu.front();
//             qu.pop();
//             for(int neighbour : rooms[curr]){
//                 if(visited.count(neighbour) == 0){
//                     qu.push(neighbour);
//                     visited.insert(neighbour);
//                 }
//             }
//         }
//         return visited.size() == rooms.size();
//     }
// };
////////////////////////////////////////////////////////////////////////////
// /////CLONE GRAPH 133
// class Solution {
//     public:
//     vector<Node*> noderegister;
    
//     void dfs(Node* actual,Node* clone){
//         for(auto neighbors : actual->neighbors){
//             if(not noderegister[neighbors->val]){
//                 Node* newnode = new Node(neighbors -> val);
//                 noderegister[newnode->val] = newnode;
//                 clone->neighbors.push_back(newnode);
//                 dfs(neighbors,newnode);
//             }
//             else{
//                 clone->neighbors.push_back(noderegister[neighbors->val]);
//             }
//         }
//     }
//     Node* cloneGraph(Node* node) {
//         if(node == NULL ) return NULL;
//         Node* clone = new Node(node->val);
//         noderegister.resize(110,NULL);
//         noderegister[clone->val] = clone;
//         dfs(node , clone);
//         return clone;

//     }
// };
////////////////////////////////////////////////////////////////////////////
///////////// / connected component
// #include<iostream>
// #include<vector>
// #include<list>
// #include<unordered_set>
// using namespace std;
// vector<list<int>> graph;

// int v ; // no of vertex;
// void add_edge(int src,int dest,bool bi_dir = true){
//     graph[src].push_back(dest);
//     if(bi_dir){
//         graph[dest].push_back(src);
//     }
// }
// void dfs(int node,unordered_set<int>& visited){
//     visited.insert(node); 
//     for(auto neighbour : graph[node]){
//         if(not visited.count(neighbour)){
//             dfs(neighbour, visited);
//         }
//     }
// }

// int connectedcomponent(){
//     int result =0;
//     unordered_set<int> visited;
//     for(int i=0;i<v;i++){
//         if(visited.count(i) == 0){
//             result++;
//             dfs(i,visited);
//         }
//     }
//     return result;
// }
// int main() {
//     cin>>v;
//     graph.resize(v,list<int> ());
//     int e;
//     cin>>e;
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         add_edge(s,d,false);
//     }
//      cout<<"connected component are : "<<connectedcomponent()<<endl;
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// /////////COLOURING A BORDAR //1034
// class Solution {
// public:
//     int col;
//     int initialCol;
//     vector<pair<int,int>> ans;
//     void helper(vector<vector<int>> &arr, int r, int c){
//     int n = arr.size();
//     int m = arr[0].size();
//     if(r<0 || c<0 || r>=n || c>=m || arr[r][c]!=initialCol) return;
//         arr[r][c] = -col;  // to distinguish btw colors
//         helper(arr,r,c+1);
//         helper(arr,r,c-1);
//         helper(arr,r+1,c);
//         helper(arr,r-1,c);
//     // Backtracking
//         // checking if it was boundary color or not
//         if(!(r==0 || c==0 || r==n-1 || c==m-1 || arr[r+1][c]!=-col || arr[r-1][c]!=-col || 
// arr[r][c-1]!=-col || arr[r][c+1]!=-col)){
//             ans.push_back({r,c});  // internal color
//         }
//     }
//     vector<vector<int>> colorBorder(vector<vector<int>>& arr, int r, int c, int color) {
//         col = color;
//         initialCol = arr[r][c];
//         if(col==initialCol) return arr;
//         helper(arr,r,c);
//         for(auto p : ans){
//             int i = p.first;
//             int j = p.second;
//             arr[i][j] = initialCol;   // retaining the color of internal node
//         }
//         for(int i=0; i<arr.size(); i++){
//             for(int j=0; j<arr[0].size(); j++){
//                 if(arr[i][j]<0) arr[i][j] = col;  // boundary color
//             }
//         }
//         return arr;
//     }
// };