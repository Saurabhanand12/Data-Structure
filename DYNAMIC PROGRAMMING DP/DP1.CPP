/////WHAT IS DP?
///// DYNAMIC PROGRAMMING THAT IS OPTIMIZED RECURSION AND SOLVE OVERLAPPING SUBPROBLEM
////DP-> RECUSION + MEMOIZATION (TOP DOWN DP) AND TABULATION (BUTTOM UP DP)
///////////FIBONACCI SERIES
// class Solution {
// public:
//     int fib(int n) {                               /// FIRST METHOD  //more overlapping problem
//         if(n == 0 ||n ==1 ) return n;                // tc= O(n^2) sp= O(n) call stack
//         return fib(n-1) + fib(n-2);
//     }
// };
///////////////////////////////////////////////////////////////
// class Solution {
// public:
//     int fibo(int n, vector<int>& dp){                              //// SECOND METHOD
//         if(n == 0 || n==1) return n;
//         if(dp[n]!=-1) return dp[n];
//         dp[n] =  fibo(n-1,dp) + fibo(n-2,dp);         //// by dp  recursion     /// // tc= O(n) sp= O(n) by vector and call stack
//         return dp[n];
//     }
//     int fib(int n) {
//         vector<int> dp(n+1,-1);          /// memoization
//         return fibo(n,dp);
//     }
// };
///////////////////////////////////////////////////////////////////////
// class Solution {
// public:
//     int fib(int n) {
//         if(n<=1) return n;      // by tabulation (itreative)BUTTOM UP DP
//         int dp[n+1];
//         dp[0]=0;                          // tc= O(n) sp= O(n)  they are better for both methods
//         dp[1]=1;                            // THIRD METHOD
//         for(int i=2;i<=n;i++){
//             dp[i] = dp[i-1]+dp[i-2];
//         }
//         return dp[n];
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////
///MIN COST CLIMBING STAIRS /////746
// class Solution {
// public:
//     int helper(vector<int>& cost,int i,vector<int>& dp){
//         if(i==0 || i==1) return cost[i]; 
//         if(dp[i] != -1) return dp[i];
//         return dp[i] =cost[i] + min(helper(cost,i-1,dp),helper(cost,i-2,dp));   //// BY DP
//     }
//     int minCostClimbingStairs(vector<int>& cost) {                        ////// FIRST METHOD
//         int n = cost.size();
//         vector<int> dp(n,-1);
//         return min(helper(cost,n-1,dp),helper(cost,n-2,dp));
//     }
// };
//////////////////////////////////
// class Solution {
// public:
//     int minCostClimbingStairs(vector<int>& cost) {     ///BT TEBULATION(ITERATIVE)
//         int n = cost.size();
//         for(int i=2;i<n;i++){
//             cost[i] += min(cost[i-1],cost[i-2]);                ////SECOND METHODE
//         }
//         return min(cost[n-1],cost[n-2]);
//     }
// };
//////////////////////////////////////////////////////////////////////////
/// UNIQUE PATH //62//
// class Solution {
// public:
//     int helper(int sr,int sc,int er,int ec ,vector<vector<int>>& dp){   ///FIRST METHOD BY DP
//         if(sr==er && sc== ec) return 1;
//         if(sr>er || sc > ec) return 0;
//         if(dp[sr][sc] != -1) return dp[sr][sc];
//         return dp[sr][sc] = helper(sr,sc+1,er,ec,dp) + helper(sr+1,sc,er,ec,dp);
//     }
//     int uniquePaths(int m, int n) {
//        vector<vector<int>> dp(m,vector<int>(n,-1));
//        return helper(0,0,m-1,n-1,dp); 
//     }
// };
///////////////////////////////////////////////////////////////////////////////
// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         int dp[m][n];
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){                        // SECOND METHOD BY TABULATION(ITREATIVE)
//                 if(i==0 || j==0 ) dp[i][j] = 1;
//                 else dp[i][j] = dp[i-1][j] +dp[i][j-1];
//             }
//         }
//         return dp[m-1][n-1];
//     }
// };
