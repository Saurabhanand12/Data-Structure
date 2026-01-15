//////// TOP K FREQUENT ELEMENT 347
// class Solution {
// public:
//     typedef pair<int,int> pi;
//     vector<int> topKFrequent(vector<int>& arr, int k) {
//         unordered_map<int,int> mp;
//         //map pair in <ele,freq>
//         for(int ele : arr){
//             mp[ele]++;
//         }
//         //heap pair in <freq,ele>
//         priority_queue<pi,vector<pi>,greater<pi>> pq;
//         for(auto x : mp){
//             int ele = x.first , freq =x.second;
//             pair<int,int> p = {freq,ele};
//             pq.push(p);
//             //pq.push({x.second,x.first});
//             if(pq.size() > k) pq.pop();
//         }
//         vector<int> ans;
//         while(pq.size() >0){
//             int ele = pq.top().second;
//             ans.push_back(ele);
//             pq.pop();
//         }
//         return ans;
//     }
// };
///////////////////////////////////////////////////////////////
//// sort array by increasing freaquency  ////hw 1636
// class Solution {
// public:
//     typedef pair<int,int> pi;

//     struct Compare {
//         bool operator()(pi const& p1, pi const& p2) {
//             if (p1.first == p2.first)
//                 return p1.second < p2.second; // For same freq, larger number comes first
//             return p1.first > p2.first; // Otherwise, smaller freq comes first
//         }
//     };

//     vector<int> frequencySort(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int ele : nums){
//             mp[ele]++;
//         }

//         priority_queue<pi,vector<pi>,Compare> pq;
//         for(auto x : mp){
//             int ele = x.first, freq = x.second;
//             pair<int,int> p = {freq, ele};
//             pq.push(p);
//         }

//         vector<int> ans;
//         while(!pq.empty()){
//             int freq = pq.top().first;
//             int ele = pq.top().second;
//             pq.pop();
//             for (int i = 0; i < freq; i++) {
//                 ans.push_back(ele);
//             }
//         }
//         return ans;
//     }
// };
///////////////
// ////// 658 find k closest element
// class Solution {
// public:
// typedef pair<int,int> pi; 
// vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//     priority_queue<pi> pq;
//     for(int ele : arr){
//         int distance = abs(x-ele);
//         pair<int,int> p = {distance,ele};
//         pq.push(p);
//         if(pq.size() > k) pq.pop();
//     }
//     vector<int> ans;
//     while(pq.size() > 0){
//         int ele = pq.top().second;
//         ans.push_back(ele);
//         pq.pop();
//     }
//     sort(ans.begin(),ans.end());
//     return ans;
//     }
// };
//////////////////////////////////////////////////////////////////
// ////973 //// kth closest point to origin
// class Solution {
// public: 
//     typedef pair<int,vector<int>> pi;
//     vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
//         priority_queue<pi> pq;
//         for(auto v : arr){
//             int x = v[0],y = v[1];
//             int dist = x*x +y*y;
//             pi p = {dist,v};
//             pq.push(p);
//             if(pq.size() > k) pq.pop();
//         }
//         vector<vector<int>> ans;
//         while(pq.size() > 0){
//             vector<int> v = pq.top().second;
//             ans.push_back(v);
//             pq.pop();
//         }
//         return ans;
//     }
// };
///////////////////////////////////////////////////////////////////
/////1046 /// last stone weight///
// class Solution {
// public:
//     int lastStoneWeight(vector<int>& arr) {
//         priority_queue<int> pq;
//         for(int ele : arr){
//             pq.push(ele);
//         }
//         while(pq.size() > 1){              /// TC = O(nlogn)
//             int x = pq.top();
//             pq.pop();
//             int y = pq.top();
//             pq.pop();
//             if(x != y){ 
//                 int diff = x-y;
//                 pq.push(diff);
//             }
//         }
//         if(pq.size() == 1) return pq.top();
//         else return 0;
//     }
// };
//////////////////////////////////////////////////////////////////////////
///// MINIMUM COST TO CONNECT ALL ROPES
// #include<iostream>
// #include<queue>
// using namespace std;

// int main() {
//     int arr[]= {2,7,4,1,8};
//     priority_queue<int,vector<int>,greater<int>> pq;
//     int mincost = 0;
//     for(int ele : arr){
//         pq.push(ele);
//     }
//     while(pq.size() > 1){
//         int a = pq.top();
//         pq.pop();
//         int b = pq.top();
//         pq.pop();
//         int sum = a + b;
//         mincost += sum;
//         pq.push(sum);
//     }
//     cout<<"MINIMUM COST IS : "<<mincost<<endl;
// return 0;
// }