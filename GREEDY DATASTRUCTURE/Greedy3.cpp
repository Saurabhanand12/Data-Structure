// ////FRACTIONAL KNAPSACK///
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool cmp(pair<int,int> &p1,pair<int,int> &p2){
//     double r1 = (p1.first*1.0) / (p2.second*1.0);
//     double r2 = (p1.first*1.0) / (p2.second*1.0);
//     return r1 > r2;
// }
// double fractionalknapsack(vector<int>& profit ,vector<int> &weight,int n, int w){
//     vector<pair<int,int>> arr;
//     for(int i=0;i<n;i++){
//         arr.push_back({profit[i],weight[i]});    // tc = O(nlogn)
//     }
//     sort(arr.begin(),arr.end(),cmp);
//     double result = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i].second <= w){
//             result +=arr[i].first;
//             w -=arr[i].second; 
//         }
//         else{
//             result += ((arr[i].first*1.0) / (arr[i].second*1.0) ) * w;
//             w=0;
//             break;
//         }
//     }
//     return result;
// }
// int main() {
//     vector<int> profit = {60,100,120};
//     vector<int> weight = {10,20,30};
//     int w =50;
//     int n = 3;
//     cout<<fractionalknapsack(profit,weight,n,w)<<endl;
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////
////// BOAT TO SAVE PEOPLE  /// 881
// class Solution {
// public:
//     int numRescueBoats(vector<int>& people, int limit) {
//         sort(people.begin(),people.end());
//         int i=0,j=people.size()-1;
//         int count= 0;
//         while( i <= j){
//             if(people[i] + people[j]  <= limit){
//                 count++;
//                 i++;
//                 j--;
//             }
//             else{
//                 count++;
//                 j--;
//             }
//         }
//         return count;
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//2182 ///construct string with repeat limit
// class Solution {
// public:
//     string repeatLimitedString(string s, int repeatLimit) {
//         unordered_map<char,int> mp;
//         for(int i=0;i<s.size();i++){
//             mp[s[i]]++;
//         }
//         priority_queue<pair<char,int>> pq;
//         for(auto p : mp){
//             pq.push(p);
//         }
//         string result = "";
//         while(!pq.empty()){
//             auto largest = pq.top();
//             pq.pop();
//             int len = min(repeatLimit,largest.second);
//             for(int i=0;i<len;i++){
//                 result +=largest.first;
//             }
//             pair<char,int> secondlargest;
//             if(largest.second - len > 0){
//                 if(!pq.empty()){
//                     secondlargest = pq.top();
//                     pq.pop();
//                     result +=secondlargest.first;
//                 }
//                 else{
//                     return result;
//                 }
//                 if(secondlargest.second - 1 > 0) pq.push({secondlargest.first,secondlargest.second-1});
//                 pq.push({largest.first,largest.second-len});
//             }
//         }
//         return result;
//     }
// };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///72 // EDIT DISTANCE
// class Solution {
// public:
//     int dp[505][505];
//     int helper(string &s1,string &s2,int i,int j){
//         if(i == s1.size()) return s2.size()-j;
//         if(j == s2.size()) return s1.size()-i;
//         if(dp[i][j] != -1) return dp[i][j];                             //////modulation 
//         if(s1[i] == s2[j]) return dp[i][j]= helper(s1,s2,i+1,j+1);
//         return  dp[i][j]=min({1 + helper(s1,s2,i+1,j+1),1 + helper(s1,s2,i+1,j),1 + helper(s1,s2,i,j+1)});
//     }
//     int minDistance(string word1, string word2) {
//         memset(dp,-1,sizeof dp);
//         return helper(word1,word2,0,0);
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// class Solution {
// public:
//     int minDistance(string word1, string word2) {
//         int m = word1.size(), n = word2.size();
//         vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

//         for (int i = 0; i <= m; ++i) {
//             for (int j = 0; j <= n; ++j) {
//                 if (i == 0) {
//                     dp[i][j] = j;
//                 } else if (j == 0) {                                         ////iterative way
//                     dp[i][j] = i;
//                 } else if (word1[i-1] == word2[j-1]) {
//                     dp[i][j] = dp[i-1][j-1];
//                 } else {
//                     dp[i][j] = 1 + min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]});
//                 }
//             }
//         }
//         return dp[m][n];
//     }
// };
    