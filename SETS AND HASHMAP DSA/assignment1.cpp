////////Q1. Relative Sort Array [LC 1122]
// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         vector<int> ans;
//         unordered_map<int,int> m;
//         for(int i=0;i<arr1.size();i++){
//             m[arr1[i]]++;
//         }
//         for(auto x : arr2){
//             while(m[x] > 0){
//                ans.push_back(x);
//                m[x]--;
//             }
//         }
//         vector<int> rem;
//         for(auto p : m){
//             int freq = p.second;
//             while(freq > 0){
//                 rem.push_back(p.first);
//                 freq--;
//             }
//         }
//         sort(rem.begin(),rem.end());
//         ans.insert(ans.end(),rem.begin(),rem.end());
//         return ans;
//     }
// };

/////////Q2. Max number of k-sum pairs [LC 1679]
// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         int count =0;
//         int n= nums.size();
//         unordered_map<int,int> m;
//         for(int i=0;i<n;i++){
//             int rem = k - nums[i];
//             if(m.find(rem) != m.end() && m[rem] > 0){
//                 count++;
//                 m[rem]--;
//             }
//             else m[nums[i]]++;
//         }
//         return count;
//     }
// };