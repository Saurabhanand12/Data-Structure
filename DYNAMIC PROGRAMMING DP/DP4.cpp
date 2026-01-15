// ////// MATRIX CHAIN MULTIPLICATIONAS ////////
// #include<iostream>
// #include<climits>
// #include<vector>
// using namespace std;
// vector<vector<int>> dp;
// int helper(int i,int j,vector<int>& arr){    /////dp
//     if( i == j or i+1 == j) return 0;
//     if(dp[i][j] != -1) return dp[i][j];
//     int ans = INT_MAX;
//     for(int k=i+1;k<j;k++){
//         ans = min(ans,helper(i,k,arr) + helper(k,j,arr) + arr[i] *arr[k]* arr[j]);
//     }
//     return dp[i][j] = ans;
// }
// int main() {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     dp.clear();
//     dp.resize(1005,vector<int> (1000,0));   /// for dp initilize by -1
//     for(int i=0;i<n;i++) cin>>v[i];
//     for(int len = 3;len<=n;len++){
//         for(int i=0;i+len-1<n;i++){
//             int j = i + len -1;
//             dp[i][j] =INT_MAX;
//             for(int k=i+1;k<j;k++){
//                 dp[i][j] = min(dp[i][j],dp[i][k] + dp[k][j] + v[i]* v[k]*v[j]);
//             }
//         }
//     }
//     cout<<helper(0,n-1,v)<<endl;
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////roys and coins boxexs
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n; // Number of boxes
//     vector<int> f(n + 1, 0); // Difference array to hold updates
//     int m;
//     cin >> m; // Number of ranges
//     // Apply the range updates using the difference array technique
//     for (int i = 0; i < m; i++) {
//         int L, R;
//         cin >> L >> R;
//         f[L]++; // Increment at the start of the range
//         if (R + 1 <= n) {
//             f[R + 1]--; // Decrement right after the end of the range
//         }
//     }
//     // Calculate the actual number of coins in each box using prefix sum
//     for (int i = 2; i <= n; i++) {
//         f[i] += f[i - 1]; // Prefix sum to get the number of coins in each box
//     }
//     // Count the occurrences of coin values in the boxes
//     vector<int> count(n + 1, 0); // count[i] will store how many boxes have exactly i coins
//     for (int i = 1; i <= n; i++) {
//         if (f[i] <= n) {
//             count[f[i]]++; // Increment the count for this coin value
//         }
//     }
//     // Prepare the cumulative count for answering queries efficiently
//     for (int i = n - 1; i >= 0; i--) {
//         count[i] += count[i + 1]; // Cumulative sum to answer the queries
//     }
//     int q;
//     cin >> q; // Number of queries
//     // Answer the queries
//     while (q--) {
//         int num;
//         cin >> num;
//         if (num <= n)    cout << count[num] << endl; // Output the number of boxes with exactly 'num' coins
//         else   cout << 0 << endl; // No boxes can have more than 'n' coins
//     }
//     return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//// MIXTURES 
// #include<iostream>
// #include<vector>
// #include<climits>
// #include<cstring>
// #define ll long long int
// using namespace std;

// ll dp[105][105];
// ll g(vector<int>& colors,int i,int j){
//     ll result =0;
//     for(int m=i;m<=j;m++){
//         result=(result%100 +colors[m] % 100) % 100;
//     }
//     return result;
// }

// ll f(vector<int>& colors ,int i ,int j){
//     if(i==j) return  dp[i][j]=0;
//     if(dp[i][j] != -1) return dp[i][j];
//     ll result = INT_MAX;
//     for(int k=i;k<=j-1;k++){
//         result = min(result,f(colors,i,k) + f(colors,k+1,j) + g(colors,i,k)* g(colors,k+1,j));
//     }
//     return  dp[i][j]=result;
// }
// int main() {
//     int n;
//     while(cin>>n){
//         vector<int> colors;
//         for(int i=0;i<n;i++){
//             int x;
//             cin>>x;
//             colors.push_back(x);
//         }
//         memset(dp,-1,sizeof dp);
//         cout<<f(colors,0,colors.size()-1)<<endl;    
//         colors.clear();
//     }
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////MAXIMUM PATH SUM ///64
// class Solution {
//     public: 
//     vector<vector<int>> arr,dp; 
//     int n ,m; 
//     int f(int i,int j){ 
//         if(i==n-1 and j== m-1) return arr[n-1][m-1]; 
//         if(i>=n or j>=m or i<0 or j<0) return INT_MAX; 
//         if(dp[i][j] != -1) return dp[i][j]; 
//         return dp[i][j] = arr[i][j] + min(f(i+1,j),f(i,j+1)); 
//         } 
//     int minPathSum(vector<vector<int>>& grid) { 
//         arr = grid;
//         n = arr.size(); 
//         m = arr[0].size(); 
//         dp.clear(); 
//         dp.resize(205,vector<int>(205,-1)); 
//         return f(0,0); 
//     } 
// };
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// class Solution {
//     public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
//         vector<vector<int>> dp(n, vector<int>(m, 0));           // Create a dp table with the same dimensions as grid
//         dp[0][0] = grid[0][0];           // Initialize the first cell
//         for (int j = 1; j < m; ++j) {          // Fill the first row
//             dp[0][j] = dp[0][j-1] + grid[0][j];
//         }
//         for (int i = 1; i < n; ++i) {         // Fill the first column
//             dp[i][0] = dp[i-1][0] + grid[i][0];
//         }                                                                                         /// TABLUTATION
//         for (int i = 1; i < n; ++i) {              // Fill the rest of the dp table
//             for (int j = 1; j < m; ++j) {
//                 dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
//             }
//         }
//         return dp[n-1][m-1];     // The bottom-right cell contains the minimum sum path
//     }
// };
    