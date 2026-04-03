// // Number of Island (200)
// class Solution {
// public:
//     int numIslands(vector<vector<char>>& grid) {
//         int rows= grid.size();
//         int cols= grid[0].size();

//         int cc =0;
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 if(grid[i][j] == '0') continue;
//                 else{
//                     cc++;
//                     grid[i][j] = '0';
//                     queue<pair<int,int>> q;
//                     q.push({i,j});
//                     while(not q.empty()){
//                         auto u = q.front();
//                         q.pop();

//                         int currRow = u.first;
//                         int currCol = u.second;
//                         // check up
//                         if(currRow -1 >= 0 and grid[currRow-1 ][currCol] == '1'){
//                             q.push({currRow-1,currCol});
//                             grid[currRow-1][currCol] = '0';
//                         }
//                         // check down
//                         if(currRow +1 < rows and grid[currRow+1 ][currCol]  == '1'){
//                             q.push({currRow+1,currCol});
//                             grid[currRow+1][currCol] = '0';
//                         }
//                         // check left
//                         if(currCol -1 >= 0 and grid[currRow ][currCol -1]  == '1'){
//                             q.push({currRow,currCol-1});
//                             grid[currRow][currCol-1] = '0';
//                         }
//                         // check right
//                         if(currCol +1 < cols and grid[currRow][currCol+1]  == '1'){
//                             q.push({currRow,currCol+1});
//                             grid[currRow][currCol+1] = '0';
//                         }
//                     }
//                 }
//             }
//         }
//         return cc;
//     }
// };

//////// Rotting Orange 
// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();

//         queue<pair<int,int>> q;
//         int fresh = 0;

//         // Step 1: Push all rotten oranges & count fresh ones
//         for(int i = 0; i < n; i++) {
//             for(int j = 0; j < m; j++) {
//                 if(grid[i][j] == 2)
//                     q.push({i, j});
//                 else if(grid[i][j] == 1)
//                     fresh++;
//             }
//         }

//         int time = 0;
//         int dx[4] = {-1, 0, 1, 0};
//         int dy[4] = {0, 1, 0, -1};

//         // Step 2: BFS
//         while(!q.empty() && fresh > 0) {
//             int sz = q.size();   // oranges rotting in same minute
//             time++;

//             while(sz--) {
//                 auto [x, y] = q.front();
//                 q.pop();

//                 for(int k = 0; k < 4; k++) {
//                     int nx = x + dx[k];
//                     int ny = y + dy[k];

//                     if(nx >= 0 && ny >= 0 && nx < n && ny < m && grid[nx][ny] == 1) {
//                         grid[nx][ny] = 2;   // make it rotten
//                         fresh--;
//                         q.push({nx, ny});
//                     }
//                 }
//             }
//         }

//         // Step 3: Result
//         return (fresh == 0) ? time : -1;
//     }
// };
