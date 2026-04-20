//////////sliding window meadian ....////480
// class Solution {
// public:
//     vector<double> medianSlidingWindow(vector<int>& nums, int k) {
//         vector<double> result;
//         multiset<int> window(nums.begin(), nums.begin() + k);
//         auto mid = next(window.begin(), k / 2);
//         for (int i = k; ; ++i) {
//             // Push the current median
//             result.push_back((double(*mid) + *next(mid, k % 2 - 1)) / 2);
//             if (i == nums.size())
//                 break;
//             window.insert(nums[i]);
//             if (nums[i] < *mid)
//                 --mid;
//             if (nums[i - k] <= *mid)
//                 ++mid;
//             window.erase(window.lower_bound(nums[i - k]));
//         }
//         return result;
//     }
// };

////////////////////////////////////////////////////////////////////////////////
////merge intervals //56
// class Solution {
// private:
//     void fast(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
//         cout.tie(NULL);
//     }
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         fast();
//         sort(intervals.begin(), intervals.end());
//         vector<vector<int>> res;
//         for(auto num: intervals){
//             if(res.empty() || res.back()[1] < num[0]){
//                 res.push_back(num);
//             }
//             else{
//                 res.back()[1]=max(res.back()[1], num[1]);
//             }
//         }
//         return res;
//     }
// };