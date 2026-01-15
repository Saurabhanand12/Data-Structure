// REDUCING DISHES
// class Solution {
// public:
//     int maxSatisfaction(vector<int>& satisfaction) {
//         int n= satisfaction.size();
//         sort(satisfaction.begin(),satisfaction.end());
//         int suf[n];
//         suf[n-1] =satisfaction[n-1];
//         for(int i=n-2;i>=0;i--){
//             suf[i] = suf[i+1] +satisfaction[i];
//         }
//         //find pivot
//         int idx =-1;
//         for(int i=0;i<n;i++){
//             if(suf[i] >= 0){
//                 idx = i;
//                 break;
//             }
//         }
//         if(idx == -1) return 0;
//         int x =1;
//         int maxsum = 0;
//         for(int i=idx;i<n;i++){
//             maxsum += (satisfaction[i]*x);
//             x++;
//         }
//         return maxsum;
        
//     }
// };
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Longest subsequence with limited sum
// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//         int n = nums.size();
//         int m = queries.size();
//         vector<int> ans(m);
//         sort(nums.begin(),nums.end());   //sort
//         for(int i=1;i<n;i++){
//             nums[i] += nums[i-1];           // prifix
//         }
//         for(int i=0;i<m;i++){         
//             int len =0;
//             for(int j=0;j<n;j++){
//             if(nums[j] > queries[i]) break;
//             len++;
//             }
//             ans[i] = len;
//         }
        // return ans;         //TC = O(n*(m+logn))        //for efficient code use binary search
//     }
// };

///////////////////////////                                /////////////////////////////
// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//         int n = nums.size();
//         int m = queries.size();
//         vector<int> ans(m);
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<n;i++){
//             nums[i] += nums[i-1];
//         }
//         for(int i=0;i<m;i++){
//             int maxlen =0;
//             int low = 0;
//             int high = n-1;
//             while(low<=high){
//                 int mid = low + (high - low) /2;
//                 if(nums[mid] > queries[i]) high = mid -1;
//                 else{
//                     maxlen = mid +1;
//                     low = mid +1; 
//                 }
//             }
//             ans[i] = maxlen;                                // TC = O((n+m)logn)
//         }
//         return ans;
//     }
// };