////////HOUSE ROBBER  //198 ///// interview qqqq
// class Solution {
// public:
//     int helper(vector<int> arr,int i){
//         if(i == arr.size()-1) return arr[i];                      //// single house
//         if(i == arr.size()-2 ) return max(arr[i],arr[i+1]);           //// 2 or more house 
//         return max(arr[i] + helper(arr,i+2),0 + helper(arr,i+1));
//     }
//     int rob(vector<int>& nums) {
//         return helper(nums,0);               ////RECURSIVE WAY
//     }
// };
///////////////////////////////////////
// class Solution {
// public:
//     vector<int> dp;
//     int helper(vector<int> arr,int i){
//         if(i == arr.size()-1) return arr[i];   //// single house
//         if(i == arr.size()-2 ) return max(arr[i],arr[i+1]);      //// 2 or more house 
//         if(dp[i]!=-1) return dp[i];
//         return  dp[i] =max(arr[i] + helper(arr,i+2),0 + helper(arr,i+1));
//     }
//     int rob(vector<int>& nums) {
//         dp.resize(105,-1);
//         return helper(nums,0);              ////// by dp way
//     }
// };
/////////////////////////////////////////
// class Solution {
// public:
//     vector<int> dp;
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if(n ==1 ) return nums[0];
//         dp.resize(n);
//         ///base case
//         dp[n-1] = nums[n-1];
//         dp[n-2] = max(nums[n-1],nums[n-2]);
//         for(int i=n-3;i>=0;i--){                                  /////tabulation
//             dp[i] = max(nums[i] +dp[i+2],0 + dp[i+1]);
//         }
//         return dp[0];
//     }
// };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// GIVEN THE NUMBER OF N,YOU CAN PERFORM ANY OF THE FOLLOWING OPERATIONS 
///1) REDUCE N TO N-1
///2) IF N IS DIVISIBLE BY 2 TO MAKE IT N/2
///3) IF N IS DIVISIBLE BY 3 TO MAKE IT N/3
// #include<iostream>
// #include<vector> 
// #include<climits>
// #include<algorithm>
// #define inf INT_MAX
// using namespace std;
// int helper(int n){
//     if(n == 1) return 0;
//     if(n== 2 or n==3 ) return 1;
//     return 1 + min(helper(n-1),min((n%2==0) ?helper(n/2) : inf,(n%3==0)? helper(n/3) :inf));
// }
// vector<int> dp;
// int helperdp(int n){
//     if(n == 1) return 0;
//     if(n== 2 or n==3 ) return 1;         //// DP MEMOIZATION   //TC = O(n) = SP
//     if(dp[n] != -1) return dp[n];
//     return dp[n]=1 + min(helperdp(n-1),min((n%2==0) ?helperdp(n/2) : inf,(n%3==0)? helperdp(n/3) :inf));
// }
// int helperitr(int n){
//     dp.clear();
//     dp.resize(n+1,-1);
//     dp[1] = 0;
//     dp[2] = dp[3] = 1;                    //// TABULATION     //TC = O(n) = SP
//     for(int i=4;i<=n;i++){
//         dp[i] = 1 + min(dp[i-1],min((i%2==0) ? dp[i/2] : inf,(i%3==0) ? dp[i/3] :inf));
//     }
//     return dp[n];
// }
// int main() {
//     int n;
//     dp.clear();
//     dp.resize(1005,-1);
//     cin>>n;
//     cout<<"BY DP SOLUTION : "<<helperdp(n)<<" "<<"AND"<<" "<<"BY TUBULATION SOLUTION : "<<helperitr(n)<<endl; 
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////REMOVING DIGIT CSES PROBLEM SET
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// vector<int> get_digit(int n){
//     vector<int> result;
//     while(n > 0){
//         if(n%10 != 0){
//             result.push_back(n%10); /// last digit push in result
//         }
//         n=n/10;       // remove last digit
//     }
//     return result;
// }
// vector<int> dp;
// int helper(int n){
//     if(n ==0) return 0;
//     if(n <= 9) return 1;
//     int result = INT_MAX;
//     if(dp[n]!=-1) return dp[n];

//     vector<int> d = get_digit(n);
//     for(int i=0;i<d.size();i++){                  //// by dp
//         result =min(result,helper(n-d[i]));
//     }
//     return  dp[n] =1 + result;
// }
// int helperitr(int num){
//     dp[0] = 0;
//     for(int i=1;i<=9;i++) dp[i] =1;
//     for(int n=10;n<=num;n++){

//         int result = INT_MAX;                  ////by tabulation
//         vector<int> d = get_digit(n);
//         for(int i=0;i<d.size();i++){
//             result =min(result,dp[n - d[i]]);
//         }
//         dp[n] =1 + result;
//     }
//     return dp[num];
// }

// int main() {
//     int n;
//     cin>>n;
//     dp.clear();
//     dp.resize(1000005,-1);
//     cout<<helper(n)<<endl;

// return 0;
// }

///////////////////