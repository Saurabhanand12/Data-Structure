///////UNIQUE BINARY SEARCH TREE ///96  ///interview
// class Solution {
//     public:
//         vector<int> dp;
//         int helper(int n){
//         if(n ==0 or n==1) return 1;
//         if(n == 2) return 2;
//         if(dp[n] != -1) return dp[n];
//             int sum = 0;
//             for(int k=1;k<=n;k++){
//                 sum += helper(k-1)*helper(n-k);      //MEMOIZATION    ///solve with formulaC(n) = (2n)! / (n! * (n+1)!)
//             }
//         return  dp[n] =sum;
//         }
//         int numTrees(int n) {
//             dp.resize(n+1,-1);
//             return helper(n);   
//         }
//     };
/////////////////////////////////////////////////////////////////////////
// int numTrees(int n) {
//     dp.resize(30,0);
//     dp[0] = dp[1] = 1;
//     dp[2] = 2 ;
//     for(int i=3;i<=n;i++){
//        for(int k=1;k<=i;k++){
//         dp[i] += dp[k-1]*dp[i-k];     //// TABULATION
//        } 
//     }
//     return dp[n];   
// }
////////////////////////////////////////////////////////////////////////////////////////////
/////L DEQUE
// #include<iostream>
// #include<vector>
// #include<cstring>
// #define ll long long int
// using namespace std;

// ll dp[3005][3005];
// ll arr[3005];

// ll helper(int i , int j){
//     if(i==j) return arr[i];
//     if(dp[i][j] !=-1) return dp[i][j];
//     return dp[i][j] = max(arr[i] -helper(i+1,j),arr[j]-helper(i,j-1));
// }
// ll helperitr(int n){
//     memset(dp,0,sizeof dp);
//     for(int i=0;i<n;i++){
//         dp[i][i] =arr[i];
//     }
//     for(int len=2;len<=n;len++){
//         for(int i=0;i<=n-len;i++){
//             int j= i+len-1;
//             dp[i][j] = max(arr[i] - dp[i+1][j], arr[j] - dp[i][j-1]);
//         }
//     }
//     return dp[0][n-1];
// }

// int main() {
//     int n;
//     cin>> n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // memset(dp,-1,sizeof dp);
//     // cout<<helper(0,n-1)<<endl;
//     cout<<helperitr(n)<<endl;

// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////Mancunian and K-Ordered LCS
// #include<iostream>
// #include<vector>
// #define ll long long int

// ll korder(int a int b,int n,int m,int i,int j,int k){
//     if(n==i or m==j) return 0;
//     if(d[i][j][k] != -1) return d[i][j][k];
//     ll res =0;
//     if(a[i] == b[j]) {
//         res = 1 + korder(a,b,n,m,i+1,j+1,k);
//     }
//     else{
//         if(k>0){
//             res = 1 + korder(a,b,n,m,i+1,j+1,k-1);
//         }
//         res = max(res, korder(a,b,n,m,i+1,j,k));
//         res = max(res, korder(a,b,n,m,i,j+1,k));
//     }
//     d[i][j][k] = res;
//     return res;
// }
// using namespace std;

// int main() {

// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///Best time to buy and sell stock //188
// class Solution {
//     public:
//         int dp[1005][1005][2];
//         int helper(vector<int> &prices,int i, int k , bool on){
//             if(i == prices.size())  return 0;
//             if(dp[i][k][on] != -1) return dp[i][k][on];
//             int ans = INT_MIN;
//             ans = helper(prices,i+1,k,on);
//             if(on){
//                 ans = max(ans,prices[i]+helper(prices,i+1,k-1,false));
//             }
//             else{
//                 if(k > 0){
//                     ans = max(ans,helper(prices,i+1,k,true)-prices[i]);
//                 }
//             }
//             return dp[i][k][on] = ans;
//         }
//         int maxProfit(int k, vector<int>& prices) {
//             memset(dp,-1,sizeof dp);
//             return helper(prices ,0,k,false);
//         }
//     };
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////adjacent bit counts ///
// #include<iostream>
// #include<vector>
// #include<cstring>
// using namespace std;
// int dp[105][105][2];

// int helper(int n,int k,int last){
//     if(n==0) return 0;
//     if(n ==1){
//         if(k==0) return 1;
//         else return 0;
//     }
//     if(dp[n][k][last] != -1) return dp[n][k][last];

//     if(last == 1){
//         return dp[n][k][last] = helper(n-1,k,0) + helper(n-1,k-1,1);
//     }
//     else{
//         return dp[n][k][last] = helper(n-1,k,0) + helper(n-1,k,1); 
//     }
// }
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int num,n,k;
//         cin>>num>>n>>k;
//         memset(dp,-1,sizeof dp);
//         int ans =helper(n,k,0) + helper(n,k,1);
//         cout<<num<<" "<<ans<<endl;
//     }

// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////// Minimum number of Taps to open to water a Garden /// 1326
// class Solution {
//     public:
//         int minTaps(int n, vector<int>& ranges) {
//             vector<int> dp(n+1,INT_MAX);
    
//             dp[0] =0;
//             for(int i=0;i<=n;i++){
//                 int start = max(0,i-ranges[i]);
//                 int end = min(n,i+ranges[i]);
//                 int ans = INT_MAX;
//                 for(int j=start;j<=end;j++){
//                     ans = min(ans,dp[j]);
//                 }
//                 if(ans != INT_MAX){
//                     dp[end]=min(dp[end],ans+1);
//                 }
//             }
//             return dp[n] == INT_MAX ? -1 : dp[n];
//         }
//     };
  