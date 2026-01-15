//////UNIQUE PATH 2 
// class Solution {
// public:
//     int helper(int sr ,int sc , int er ,int ec,vector<vector<int>>& dp,vector<vector<int>>& grid ){
//         if(sr == er && sc == ec) return 1;
//         if(sr > er || sc > ec || grid[sr][sc] == 1 ) return 0;
//         if(dp[sr][sc] != -1) return dp[sr][sc];
//         return dp[sr][sc] = helper(sr+1,sc,er,ec,dp,grid) +  helper(sr,sc+1,er,ec,dp,grid);
        
//     }
//     int uniquePathsWithObstacles(vector<vector<int>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();
//         if(grid[0][0] == 1 || grid[m-1][n-1]) return 0;
//         vector<vector<int>> dp(m,vector<int>(n,-1));
//         return  helper(0,0,m-1,n-1,dp,grid);
//     }
// };
////////// TRIBONACCIE number 1137
// class Solution {
// public:
//     int helper(int n, vector<int>& dp) {
//         if (n == 0 ) return 0;
//         if( n == 1 || n == 2) return 1;
//         if (dp[n] != -1) return dp[n];
//         return dp[n] = helper(n-1, dp) + helper(n-2, dp) + helper(n-3, dp);     ///// by dp;
//     }

//     int tribonacci(int n) {
//         vector<int> dp(n + 1, -1);
//         return helper(n, dp);
//     }
// };
/////////////// COUNTING BITS 338
// class Solution {
// public:
//     vector<int> countBits(int n) {
//         vector<int> dp(n + 1, 0);
//         for (int i = 1; i <= n; i++) {
//             dp[i] = dp[i >> 1] + (i & 1);  // i >> 1 shifts bits, i & 1 checks if the number is odd
//         }
//         return dp;
//     }
// };

