///////// RABBIT IN FOREST ///781
// class Solution {
//     public:
//         int numRabbits(vector<int>& ans) {
//             unordered_map<int,int> mp;
//             int result = 0;
//             for(int i = 0; i < ans.size() ; i++){     /// tc = O(n) = spc
//                 if(!mp[ans[i] + 1]){
//                     result += ans[i] + 1;
//                     if(ans[i] == 0) continue;
//                     mp[ans[i] + 1] = 1;
//                 }
//                 else{
//                    mp[ans[i] + 1]++;
//                    int key = ans[i] + 1;
//                    int val = mp[key];
//                    if( key == val){
//                     mp.erase(key);
//                    } 
//                 }
//             }
//             return result;
//         }
//     };
/////////////////////////////////////////////////////////////////////////////////////////////
// // /////////Leetcode 452 Minimum Number of Arrows to Burst Balloons///
// bool cmp(vector<int>& i1 ,vector<int>& i2){
//     return i1[1] < i2[1];
// }
// class Solution {
// public:
//     int findMinArrowShots(vector<vector<int>>& points) {
//         int ans =0;
//         sort(points.begin(),points.end(),cmp);
//         int lastendtime = points[0][1];
//         for(int i=1;i<points.size();i++){
//             if(points[i][0] <= lastendtime){
//                 ans++;
//             }
//             else{
//                 lastendtime = points[i][1];
//             }
//         }
//         return points.size()-ans;
//     }
// };
///////////////////////////////////////////////////////////////////////////////////////////////////
//// MEETING ROOM 2
// class Solution {
//     public:
//     int minMeetingRooms(vector<Interval>& intervals) {
//         vector<int> start,end;
//         int ans = 0;
//         int rooms = 0;
//         for(auto ele : intervals){
//             start.push_back(ele.start);
//             end.push_back(ele.end);
//         }
//         sort(start.begin(),start.end());
//         sort(end.begin(),end.end());
//         int i=0,j=0;
//         while(i < start.size() and j < end.size()){
//             if(start[i] < end[j]){
//                 rooms++;
//                 ans = max(ans,rooms);
//                 i++;
//             }
//             else if(start[i] == end[j]){
//                 i++;
//                 j++;
//             }
//             else{
//                 rooms--;
//                 j++;
//             } 
//         }        
//         return ans;
//     }
// };

//////////////////////////////////////////////////////////////////////////////////
/////// MEETING ROOMS
// class Solution {
//     public:
//     int minMeetingRooms(vector<Interval>& intervals) {
//         if(intervals.size() ==  0) return true;
//         vector<int> start,end;
//         int ans = 0;
//         int rooms = 0;
//         for(auto ele : intervals){
//             start.push_back(ele.start);
//             end.push_back(ele.end);
//         }
//         sort(start.begin(),start.end());
//         sort(end.begin(),end.end());
//         int i=0,j=0;
//         while(i < start.size() and j < end.size()){
//             if(start[i] < end[j]){
//                 rooms++;
//                 ans = max(ans,rooms);
//                 i++;
//             }
//             else if(start[i] == end[j]){
//                 i++;
//                 j++;
//             }
//             else{
//                 rooms--;
//                 j++;
//             }      
//         }        
//         return ans == 1;
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////
// //// NON - OVERLAPPING INTERVALS ///435
// bool cmp(vector<int>& i1 , vector<int>& i2){
//     return i1[0] < i2[0];
// }
// class Solution {
// public:
//     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//         int ans = 0;
//         sort(intervals.begin(),intervals.end(),cmp);
//         int lastendtime = intervals[0][1];
//         for(int i=1;i<intervals.size();i++){
//             if(intervals[i][0] < lastendtime){
//                 ans++;
//                 lastendtime = min(lastendtime,intervals[i][1]);
//             }
//             else{
//                 lastendtime = intervals[i][1];
//             }
//         }
//         return ans;
//     }
// };

    

