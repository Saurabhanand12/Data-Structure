// ////// MINIMIZING COIN PROBLEM IN CSES 
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
 
// vector<int> coins;
// vector<int> dp(1000006,-2);

// int helper(int x){
//     if(x == 0) return 0;
//     if(dp[x] != -2) return dp[x];
//     int result = INT_MAX;
//     for(int i=0;i<coins.size();i++){
//        if(x-coins[i] < 0) continue;
//        result = min(result,helper(x - coins[i]));
//     }
//     if(result == INT_MAX) return dp[x]=INT_MAX;
//     return dp[x] = 1+ result;
// }

// int main() {
//     int n,x;
//     cin>>n>>x;
//     for(int i=0;i<n;i++){
//         int num;
//         cin>>num;
//         coins.push_back(num);
//     }
//     int ans = helper(x);
//     if(ans == INT_MAX) cout<<"-1"<<endl;
//     else cout<<ans<<endl;
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////
////DICE COMBINATIONS //CSES
// #include<iostream>
// #include<vector>
// #define ll long long int 
// #define mod 1000000007
// using namespace std;

// vector<ll> dp(1000005,-1);
// ll helper(int n){
//     if(n ==0 ) return 1;
//     if(dp[n] != -1) return dp[n];
//     ll sum =0;
//     for(int i=1;i<=6;i++){
//         if(n-i <0) break;
//         sum =( sum% mod + helper(n-i) % mod ) %mod;
//     }
//     return dp[n] = sum % mod;
// }

// ll helperitr(int n){
//     dp[0] =1;
//     for(int k=1;k<=n;k++){
//         ll sum =0;
//         for(int i=1;i<=6;i++){
//             if(k-i <0) break;
//             sum =( sum% mod + dp[k-i] % mod ) %mod;
//         }
//         dp[k] = sum % mod; 
//     }
//     return dp[n];
// }

// int main() {
//     int n;
//     cin>>n;
//     cout<<helperitr(n)<<endl;
//     return 0;

// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////NUMBER OF DICE ROLLS WITH TARGET SUM //1155
// #define ll long long int 
// #define mod 1000000007
// class Solution {
// public:
//     vector<vector<int>> dp;
//     int helper(int n , int k, int t){
//         if(n==0 && t==0) return 1;
//         if(n==0) return 0;
//         if(dp[n][t] != -1) return dp[n][t];
//         int sum =0;
//         for(int v=1;v<=k;v++){
//             if(t-v < 0) continue; 
//             sum =((sum%mod) + helper(n-1,k,t-v)%mod)%mod;
//         }
//         return dp[n][t] = sum%mod;
//     }
//     int numRollsToTarget(int n, int k, int target) {
//         dp.clear();
//         dp.resize(35,vector<int>(1005,-1));
//         return helper(n,k,target);
//     }
// }; 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///C VACATION PROBLEM
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() {
//     int n;
//     cin>> n;
//     vector<vector<int>> dp(n,vector<int> (3,0));

//     int a , b , c ;
//     cin>> a>> b>>c;
//     dp[0][0] = a;
//     dp[0][1] = b;
//     dp[0][2] = c;

//     for(int i=1;i<n;i++){
//         cin>>a>>b>>c;
//          //ith day-> a
//         dp[i][0] = a + max(dp[i-1][1] ,dp[i-1][2]);
//          //ith day-> b
//         dp[i][1] = b + max(dp[i-1][0] ,dp[i-1][2]);
//          //ith day-> c
//         dp[i][2] = c + max(dp[i-1][0] ,dp[i-1][1]);
//     }
//     cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});

// return 0;
// }
///////////////////////////////////////////////////////////
////MCOINS -coin problem
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int k,l,m;
//     //m ->number of games
//     cin>>k>>l>>m;
    
//     vector<bool> dp(1000005,0);
//     dp[1] = 1;
//     dp[k] = 1;
//     dp[l] = 1;

//     for(int i=2;i<=1000000;i++){
//         if(i == k or i == l)  continue;
//         dp[i] = !(dp[i-1] and ((i-k >=1) ? dp[i-k] : 1) and((i-l >= 1) ? dp[i-l] : 1));
//     }
//     for(int i=0;i<m;i++){
//         int n;
//         cin>>n;
//         if(dp[n] == 1){
//             cout<<"A";
//         }
//         else{
//             cout<<"B";
//         }
//     }

// return 0;
// }
