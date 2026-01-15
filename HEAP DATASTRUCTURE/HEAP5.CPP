///// FIND MEDIAN FORM DATA STREAM
// class MedianFinder {
// public:
// vector<int> v;
//     MedianFinder() {    
//     }
//     void addNum(int num) {
//         v.push_back(num);                        //first method //but runtime error
//         sort(v.begin(),v.end());
//     }
//     double findMedian() {
//         int n= v.size();
//         if(n%2!=0) return v[n/2];
//         else return (v[n/2]+v[n/2-1])/2.0;
//     }
// };
////////////////////////////////
// class MedianFinder {
// public:
//     priority_queue<int> left;   // max heap
//     priority_queue<int,vector<int>,greater<int>> right;   //min heap //tc = o(logn)
//     void addNum(int num) {
//         if(left.size() ==0 || num < left.top()) left.push(num);
//         else right.push(num);
        
//         if(left.size() > right.size()+1){                       //SECOND METHOD
//             right.push(left.top());
//             left.pop();
//         }
//         if(right.size() > left.size()+1){
//             left.push(right.top());
//             right.pop();
//         }
//     }
//     double findMedian() {                     //tc = o(1)
//         if(left.size()==right.size()){
//             return (left.top() + right.top())/2.0;
//         }
//         else{
//             if(left.size() > right.size()) return left.top();
//             else return right.top();
//         }
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//////632 //// SMALLEST RANGE COVERING ELEMENTS FROM K LISTS
// class Solution {
// public:
//     typedef pair<int,pair<int,int>> pip;
//     vector<int> smallestRange(vector<vector<int>>& arr) {
//         priority_queue<pip,vector<pip>,greater<pip>> pq;
//         //pq element ={arr[row][col],{row,col}}        // tc = O(klogk)
//         int mx = INT_MIN;
//         for(int i=0;i<arr.size();i++){
//             mx = max(mx,arr[i][0]);
//             pq.push({arr[i][0],{i,0}});
//         }
//         int mn = pq.top().first;
//         int start = mn, end = mx;                              ////// final tc = O(nklogk)
//         while(true){
//             int row = pq.top().second.first;
//             int col = pq.top().second.second;
//             pq.pop();
//             if(col==arr[row].size()-1) break;
//             pq.push({arr[row][col+1],{row,col+1}});         tc =O(nklogk)
//             mx=max(mx,arr[row][col+1]);
//             mn = pq.top().first;
//             if(mx-mn < end-start){
//                 end = mx;
//                 start = mn;
//             }
//         }
//         return {start,end};
//     }
// };
