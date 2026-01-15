// ////////Determine if two strings are Close  1657////
// class Solution {
// public:
//     bool closeStrings(string str1, string str2) {
//         if(str1.size()!=str2.size()) return false;
//         unordered_map<int,int> m1,m2;
//         for(int i=0;i<str1.size();i++){
//             m1[str1[i]]++;
//             m2[str2[i]]++;
//         }
//         for(auto x : m1){
//             char ch = x.first;
//             if(m2.find(ch)==m2.end()) return false;
//         }
//         unordered_map<int,int> h1,h2;
//         for(auto x : m1){
//            int freq= x.second;
//            h1[freq]++;
//         }
//         for(auto x : m2){
//            int freq= x.second;
//            h2[freq]++;
//         }
//         //camparing
//         for(auto x : h1){
//            int key= x.first;
//            if(h2.find(key)==h2.end()) return false;
//            if(h2[key]!=h1[key]) return false;
//         }
//         return true;
//     }
// };
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////Check if array pairs are divisible by k /// 1497//
// class Solution {
// public:
//     bool canArrange(vector<int>& arr, int k) {
//         unordered_map<int,int> mp;
//         for(int ele : arr){
//             ele = ((ele%k)+k)%k;
//             mp[ele]++;
//         }
//         if(mp.find(0)!=mp.end()){
//             if(mp[0]%2!=0) return false;
//             mp.erase(0);
//         }
//         for(auto x : mp){
//             int ele = x.first;
//             int rem = k -ele;
//             if(mp.find(rem)==mp.end()) return false;
//             if(mp[ele]!=mp[rem]) return false;
//         }
//         return true;
//     }
// };