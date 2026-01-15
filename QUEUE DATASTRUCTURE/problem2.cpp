// //// FIRST NEGATIVE IN WINDOW////////////////////
// #include<iostream>
// #include<queue>
// using namespace std;
// int main() {
//     int arr[] = {3,-4,-7,30,7,-9,2,1,6,-1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k=3;
//     vector<int> ans;
//     queue<int> q;
//     for(int i=0;i<n;i++){
//         if(arr[i] < 0) q.push(i);
//     }
//     int i=0;
//     while(i <=n-k){
//         while(q.size() > 0 && q.front() < i) q.pop();
//         if(q.size()==0 || q.front() >= i+k) ans.push_back(0);
//         else ans.push_back(arr[q.front()]);
//         i++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// SLIDING WINDOW MAXIMUM////////////////
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         if (k == 1) return nums;  // Special case: If k = 1, each element is its own window max.
//         int n = nums.size();
//         deque<int> dq;  // Deque to store indices of elements in decreasing order
//         vector<int> ans;  // Result vector to store the maximums for each window
//         for (int i = 0; i < n; i++) {
//             // Remove elements from the back of the deque if they are smaller than the current element
//             while (!dq.empty() && nums[dq.back()] < nums[i])  dq.pop_back();
//             // Push the current element's index to the deque
//             dq.push_back(i);
//             // Remove the element at the front of the deque if it's out of the current window
//             int j = i - k + 1;
//             while (!dq.empty() && dq.front() < j) dq.pop_front();
//             // Once we have processed at least 'k' elements, the front of the deque is the max of the current window
//             if (i >= k - 1) ans.push_back(nums[dq.front()]);
//         }
//         return ans;
//     }
// };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////Dota2 senate//////////////////
// class Solution {
// public:
//     string predictPartyVictory(string s) {
//         queue<int> q;
//         queue<int> r;
//         queue<int> d;
//         for(int i=0;i<s.size();i++){
//             q.push(i);
//             if(s[i] =='R') r.push(i);
//             else d.push(i);
//         }
//         while(q.size()>1){
//             if(s[q.front()] == 'X')  q.pop();
//             else if(s[q.front()] == 'R'){
//                 if(d.size() == 0) return "Radiant";
//                 else{
//                     s[d.front()] = 'X';
//                     d.pop();
//                     q.push(q.front());
//                     q.pop();
//                     r.push(r.front());
//                     r.pop();
//                 }
//             }
//             else{
//                 if(r.size() == 0) return "Dire";
//                 else{
//                     s[r.front()] = 'X';
//                     r.pop();
//                     q.push(q.front());
//                     q.pop();
//                     d.push(d.front());
//                     d.pop();
//                 }

//             }
//         }
//         if(s[q.front()] == 'R') return "Radiant";
//         else return "Dire";
//     }
// };
